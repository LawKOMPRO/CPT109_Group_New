#include "user_manager.h"
#include <stdbool.h>
Customer customers[100];
int customerCount = 0;
const char *filename = "customers.dat";
void registerNewAccount() {
    if (customerCount >= 100) {
        printf("Unable to register more accounts.\n");
        return;
    }
    printf("Please enter customer name: ");
    scanf("%49s", customers[customerCount].name); // 防止缓冲区溢出
    printf("Please enter customer contribution: ");
    scanf("%99s", customers[customerCount].contributions); // 防止缓冲区溢出
    customerCount++;
    printf("New account registered successfully!\n");
}
void editAccountDetails() {
    if (customerCount == 0) {
        printf("There is no account to edit.\n");
        return;
    }
    int n;
    printf("Please enter the name of the client you want to edit: ");
    char searchName[50];
    scanf("%49s", searchName); // 防止缓冲区溢出
    for (n = 0; n < customerCount; n++) { // 修复了循环条件，防止越界
        if (strcmp(customers[n].name, searchName) == 0) {
            break;
        }
    }
    if (n == customerCount) {
        printf("No customer found.\n");
        return;
    }
    printf("Please enter a new customer contribution: ");
    scanf("%99s", customers[n].contributions); // 防止缓冲区溢出
    printf("Account information has been updated.\n");
}
void viewContributions() {
    for (int i = 0; i < customerCount; i++) {
        printf("Customer Name: %s\n", customers[i].name);
        printf("Conclusion: %s\n\n", customers[i].contributions);
    }
}

void loadCustomers() {
    FILE *fp = fopen(filename, "rb");
    if (fp != NULL) {
        fread(&customerCount, sizeof(int), 1, fp);
        fread(customers, sizeof(Customer), customerCount, fp);
        fclose(fp);
    } else {
        customerCount = 0;
    }
}

void saveCustomers() {
    FILE *fp = fopen(filename, "wb");
    if (fp != NULL) {
        fwrite(&customerCount, sizeof(int), 1, fp);
        fwrite(customers, sizeof(Customer), customerCount, fp);
        fclose(fp);
    } else {
        perror("Error saving customers");
        exit(EXIT_FAILURE);
    }
}


void user_manager () {
    char choice;
    bool flag = true;
    loadCustomers();

    while (flag) {
        printf("User Management\n");
        printf("1. Add new user\n");
        printf("2. Edit detailed user information\n");
        printf("3. View past contributions and activities\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf(" %c", &choice); // 读取一个字符，并跳过任何空白字符

        switch (choice) {
            case '1':
                registerNewAccount();
            saveCustomers(); // 注册新账户后保存数据
            break;
            case '2':
                editAccountDetails();
            saveCustomers(); // 编辑账户后保存数据
            break;
            case '3':
                viewContributions();
            break;
            case '4':
                saveCustomers(); // 退出前保存数据
            flag=false;
            break;
            default:
                printf("Invalid selection.\n\n");
        }
    }
    return ;
}

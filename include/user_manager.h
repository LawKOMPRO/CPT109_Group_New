//
// Created by 13206 on 24-11-4.
//

#ifndef USER_MANAGER_H
#define USER_MANAGER_H
void hello();
#endif //USER_MANAGER_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



typedef struct {
    char name[50];
    char contributions[100];
} Customer;

Customer customers[100];
int customerCount = 0;
const char *filename = "customers.dat";

// 函数声明
void loadCustomers();
void saveCustomers();

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

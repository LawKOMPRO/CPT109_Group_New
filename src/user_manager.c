#include "user_manager.h"
#include <stdbool.h>


void manageCustomerAccounts () {
    char choice;
    bool flag = true;
    loadCustomers();

    while (1) {
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
            exit(0);
            default:
                printf("Invalid selection.\n\n");
        }
    }
    return 0;
}

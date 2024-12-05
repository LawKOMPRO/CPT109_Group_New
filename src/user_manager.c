#include "user_manager.h"
#include <stdbool.h>


void user_manager () {
    char choice;
    bool flag = true;
    while (1) {
        printf("User Management\n");
        printf("1. Add new user\n");
        printf("2. Edit detailed user information\n");
        printf("3. View past contributions and activities\n");
        printf("4. Exit\n");
        printf("Select an option:");
        scanf("%s", &choice);

        switch (choice) {
            case '1':
                registerNewAccount();
            break;
            case '2':
                editAccountDetails();
            break;
            case '3':
                viewContributions();
            break;
            case '4':
                exit(0);
            // case '\0':
            //     break;
            default:
                printf("invalid Selection.\n\n");
        }
    }
    return;
}

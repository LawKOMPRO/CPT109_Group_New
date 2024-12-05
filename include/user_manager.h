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




void registerNewAccount() {
    if (customerCount >= 100) {
        printf("Unable to register more accounts。\n");
        return;
    }
    printf("Please enter customer name:");
    scanf("%s", customers[customerCount].name);
    printf("Please enter customer contribution:");
    scanf("%s", customers[customerCount].contributions);
    customerCount++;
    printf("New account registered successfully!\n");
}

void editAccountDetails() {
    if (customerCount ==0) {
        printf("There is no account to edit.\n");
        return;
    }
    int n;
    printf("Please enter the name of the client you want to edit:");
    char searchName[50];
    scanf("%s", searchName);
    for (n = 0; n <=customerCount; n++) {
        if (strcmp(customers[n].name, searchName) == 0) {
            break;
        }
    }
    if (n == customerCount) {
        printf("No customer found.\n");
        return;
    }
    printf("Please enter a new customer contribution:");
    scanf("%s", customers[n].contributions);
    printf("Account information has been updated.\n");
}

void viewContributions() {
    for (int i = 0; i < customerCount; i++) {
        printf("Customer Name:%s\n", customers[i].name);
        printf("Conclusion:%s\n\n", customers[i].contributions);

    }
}

void user_manager();

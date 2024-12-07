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



// 函数声明
void loadCustomers();
void saveCustomers();

void registerNewAccount();

void editAccountDetails() ;


void viewContributions() ;

void loadCustomers() ;

void saveCustomers();

void user_manager () ;

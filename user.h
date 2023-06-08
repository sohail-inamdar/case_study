#ifndef __USER_H
#define __USER_H

#include<stdio.h>
#include<string.h>

typedef enum role {OWNER,LIBRARIAN,USER}Role;

typedef struct user
{
    int id;
    char name[30];
    char email[30];
    char password[15];
    char phone[10];
    Role role;
    
}user_t;





#endif
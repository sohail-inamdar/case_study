#include"user.h"

int main(int argc, char *argv[]) 
{
    if(argc == 2 && strcmp(argv[1], "--init") == 0) 
    {
        user_t owner;
        user_accept(&owner);
        owner_register(&owner);
        exit(0);
    }

    // menu-driven program
}
#include <stdio.h>

//typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    User user1 =  {"Walpertinger", "TingerTinger", 198438734};
    
    printf("%s\n%s\n%d\n", user1.name, user1.password, user1.id);

    return 0;
}
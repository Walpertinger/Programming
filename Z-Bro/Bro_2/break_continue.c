#include <stdio.h>

int main()
{
    // continue and break
    int type;

    printf("either A. (continue) or B. (break)?: \n");
    scanf("%c", &type);

    switch(type)
    {
        case 'A':
            for(int i = 1; i <= 20; i++)
            {   
                if(i == 13)
                {
                    continue;
                }
                printf("%d\n", i);
            }
            break;

        case 'B':
            for(int i = 1; i <= 20; i++)
            {
                if(i == 13)
                {
                    break;
                }
                printf("%d\n", i);
            }
            break;

    }
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

// First apoproach
// void strToggleX(char *str)
// {
//     while(*str != '\0')
//     {
//         if((*str >= 'a') && (*str <= 'z'))
//         {
//             *str = *str - 32;
//         }
//         else if((*str >= 'A') && (*str <= 'Z'))
//         {
//             *str = *str + 32;
//         }
//         str++;
//     }
// }

// Second approach
void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - ('a' - 'A');
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);
    strToggleX(Arr);

    printf("Modified string is %s",Arr);

    return EXIT_SUCCESS;
}
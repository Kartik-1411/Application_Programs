#include<stdio.h>
#include<stdlib.h>

// First apoproach
// void strUpperX(char *str)
// {
//     while(*str != '\0')
//     {
//         if((*str >= 'a') && (*str <= 'z'))
//         {
//             *str = *str - 32;
//         }
//         str++;
//     }
// }

// Second approach
void strUpperX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);
    strUpperX(Arr);

    printf("Modified string is %s",Arr);

    return EXIT_SUCCESS;
}
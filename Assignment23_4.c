#include<stdio.h>
#include<stdlib.h>

// First apoproach
// void DisplayDigit(char *str)
// {
//     while(*str != '\0')
//     {
//         if((*str >= 48) && (*str <= 57))
//         {
//             printf("%c",*str);
//         }
//         str++;
//     }
// }

// Second approach
void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
}


int main()
{
    char Arr[20];
    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);
    DisplayDigit(Arr);

    return EXIT_SUCCESS;
}
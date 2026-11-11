#include<stdio.h>
#include<stdlib.h>

// First apoproach
// void strLowerX(char *str)
// {
//     while(*str != '\0')
//     {
//         if((*str >= 'A') && (*str <= 'Z'))
//         {
//             *str = *str + 32;
//         }
//         str++;
//     }
// }

// Second approach
void strLowerX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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
    strLowerX(Arr);

    printf("Modified string is %s",Arr);

    return EXIT_SUCCESS;
}
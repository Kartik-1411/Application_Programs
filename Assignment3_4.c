#include<stdio.h>


void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c",cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c",cValue + 32);
    }    
    else
    {
        printf("%c is not an alphabet",cValue);
    }    
}


int main()
{
    char cValue = '\0';
    printf("Enter the character : ");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}


// Optimized code using ctype.h header file(need to include ctype.h)
// void DisplayConvert(char cValue)
// {
//     char capital = '\0',small = '\0';
//     if(islower(cValue))
//     {
//         capital  = toupper(cValue);
//         printf("%c",capital); 
//     }
//     else if(isupper(cValue))
//     {
//         small  = tolower(cValue);
//         printf("%c",small); 
//     }
//     else
//     {
//         printf("%c is not an alphabet",cValue);
//     }
// }
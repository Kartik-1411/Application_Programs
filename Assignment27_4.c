#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bRet = FALSE;
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')
        || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            bRet = TRUE;
            return bRet;
        }
        str++;
    }
    return bRet;
}

int main()
{
    BOOL bRet = FALSE;
    char Arr[20];
    printf("Enter the string: ");
    scanf("%[^\n]s",Arr);

    bRet = ChkVowel(Arr);
    
    if(bRet == TRUE)
    {
        printf("Given string contains vowels\n");
    }
    else
    {
        printf("Given string doesn't contain vowels\n");
    }

    return 0;
}
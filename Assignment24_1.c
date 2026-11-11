#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCharacter(char *str,char ch)
{
    BOOL bFlag = FALSE;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
            break;   
        }
        str++;
    }

    return bFlag;
}


int main()
{
    char Arr[50];
    BOOL bRet = FALSE;
    char cValue = '\0';
    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);

    printf("Enter the character to check if it is present in the string :  ");
    scanf(" %c",&cValue);

    bRet = ChkCharacter(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }
    

    return EXIT_SUCCESS;
}
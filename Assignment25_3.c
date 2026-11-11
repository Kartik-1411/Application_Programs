#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL bRet = FALSE;

    if((ch >= '0') && (ch <='9'))
    {
        bRet = TRUE;
    }

    return bRet;
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :  ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a digit\n",cValue);
    }
    else
    {
        printf("%c is not a digit\n",cValue);
    }
    
    

    return EXIT_SUCCESS;
}
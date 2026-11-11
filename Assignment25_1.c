#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bRet = FALSE;

    if(((ch >= 'a') && (ch <='z')) || ((ch >= 'A') && (ch <='Z')))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("%c is an alphabet\n",cValue);
    }
    else
    {
        printf("%c is not an alphabet\n",cValue);
    }
    
    

    return EXIT_SUCCESS;
}
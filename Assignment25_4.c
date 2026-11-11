#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    BOOL bRet = FALSE;

    if((ch >= 'a') && (ch <='z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a small case character\n",cValue);
    }
    else
    {
        printf("%c is not a small case character\n",cValue);
    }
    
    

    return EXIT_SUCCESS;
}
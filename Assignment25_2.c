#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    BOOL bRet = FALSE;

    if((ch >= 'A') && (ch <='Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a Capital alphabet\n",cValue);
    }
    else
    {
        printf("%c is not a Capital alphabet\n",cValue);
    }
    
    

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{   
    BOOL bRet = FALSE;
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return bRet;
    }
    else
    {
        bRet = TRUE;
        
    }
    return bRet;
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a special symbol\n",cValue);
    }
    else
    {
        printf("%c is not a special symbol\n",cValue);
    }

    return EXIT_SUCCESS;
}
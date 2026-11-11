#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;         
        }
        str++;
    }

    return iCnt;
}


int main()
{
    char Arr[50];
    int iRet = 0;
    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);
    iRet = CountWhite(Arr);

    printf("Number of whitespaces in '%s' is %d\n ",Arr,iRet);

    return EXIT_SUCCESS;
}
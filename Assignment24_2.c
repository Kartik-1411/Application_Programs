#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char ch)
{
    int iFreq = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
               iFreq++;
        }
        str++;
    }

    return iFreq;
}


int main()
{
    char Arr[50];
    int iRet = 0;
    char cValue = '\0';
    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);

    printf("Enter the character to check its frequency in the string: ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("Frequency of the character '%c' in the string '%s' is %d\n",cValue,Arr,iRet);
    

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str,char ch)
{
    int index = 0;
    int iPos = 0;

    iPos = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = index;
        }
        str++;
        index++;
    }

    return iPos;
}


int main()
{
    char Arr[50];
    int iRet = 0;
    char cValue = '\0';
    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);

    printf("Enter the character to check its index of last occurrence :  ");
    scanf(" %c",&cValue);

    iRet = CountChar(Arr,cValue);

    printf("index of last occurence of the character %c in the string '%s' is %d\n",cValue,Arr,iRet);
    

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[20];
    printf("Enter the string: ");
    scanf("%[^\n]s",Arr);

    iRet = CountCapital(Arr);
    
    printf("Number of Capital letters in '%s' is %d\n",Arr,iRet);

    return 0;
}
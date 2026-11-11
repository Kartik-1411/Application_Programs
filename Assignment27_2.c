#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);
    
    printf("Number of small letters in '%s' is %d\n",Arr,iRet);

    return 0;
}
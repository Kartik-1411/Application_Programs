#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmall = 0, iCapital = 0, iDiff = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        str++;
    }

    iDiff = iSmall - iCapital;

    return iDiff;
}

int main()
{
    int iRet = 0;
    char Arr[20];
    printf("Enter the string: ");
    scanf("%[^\n]s",Arr);

    iRet = Difference(Arr);
    
    printf("Difference between frequency of small letters and frequency of capital letters in '%s' is %d\n",Arr,iRet);

    return 0;
}
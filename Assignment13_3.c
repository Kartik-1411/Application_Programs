#include<stdio.h>


int CountRange(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if((iDigit >= 3) && (iDigit < 7))
        {
            iFrequency++;
        }
    }
    return iFrequency; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        iRet = CountRange(iValue);
        printf("Frequency of digits between 3 and 7 in %d is %d",iValue,iRet);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
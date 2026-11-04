#include<stdio.h>


int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        iMult = iMult * iDigit;
    }
    return iMult; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        iRet = MultDigits(iValue);
        printf("Multiplication of digits in %d is %d",iValue,iRet);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
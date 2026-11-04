#include<stdio.h>


int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else if(iDigit % 2 != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }
    }
    
    iDiff = iSumEven - iSumOdd;
    return iDiff; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        iRet = CountDiff(iValue);
        printf("Difference between summation of even digits and summation of odd digits in %d is %d",iValue,iRet);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
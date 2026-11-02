#include<stdio.h>


int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;
    int Difference = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt > 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else
        {
            iFactOdd = iFactOdd * iCnt;
        }

    }
    Difference = iFactEven -iFactOdd;
    return Difference;
    
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    iRet = FactorialDiff(iValue);
    printf("Difference of Odd and Even Factorial of %d is %d\n",iValue,iRet);
    
    return 0;
}

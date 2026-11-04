#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0, iDiff = 0;
    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    iDiff = iSumFact - iSumNonFact;

    return iDiff;
}


int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        iRet = FactDiff(iValue);
        printf("Difference between Summation of factors and Summation of non factors of %d is %d",iValue,iRet);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
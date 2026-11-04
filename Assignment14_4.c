#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}


int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        iRet = SumNonFact(iValue);
        printf("Summation of non factors of %d is %d",iValue,iRet);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
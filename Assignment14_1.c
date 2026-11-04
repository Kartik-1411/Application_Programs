#include<stdio.h>

int MultFact(int iNo)
{
    int iMult = 1, iCnt = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;

        }
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
        iRet = MultFact(iValue);
        printf("Multiplication of factors of %d is %d",iValue,iRet);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
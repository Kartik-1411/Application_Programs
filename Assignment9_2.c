#include<stdio.h>


int DollartoINR(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid input\n");
        return 0;
    }
    int iCurrency = 0;
    iCurrency = iNo * 70;
    return iCurrency;
}




int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the number of USD : \n");
    scanf("%d",&iValue);
    iRet = DollartoINR(iValue);
    printf("Value of %d dollars in INR is %d\n",iValue,iRet);
    
    return 0;
}

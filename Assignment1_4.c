#include<stdio.h>
#include<stdbool.h>

bool CheckDivisibleBy5(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    bool bRet = false;
    int iValue = 0;
    scanf("%d",&iValue);
    bRet = CheckDivisibleBy5(iValue);
    if(bRet == true)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }


    return 0;
}
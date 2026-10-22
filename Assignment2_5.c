#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number : ");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);

    if(bRet == false)
    {
        printf("%d is an odd number",iValue);
    }
    else
    {
        printf("%d is an even number",iValue);
    }

    return 0;
}



/*
Optimized function to check even or odd

bool ChkEven(int iNo)
{
    return (iNo % 2 == 0);
}

*/
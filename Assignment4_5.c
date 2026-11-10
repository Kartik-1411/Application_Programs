#include<stdio.h>

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("%d is divisible by 5\n",iNo);
    }
    else
    {
        printf("%d is not divisible by 5\n",iNo);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        CheckDivisibility(iValue);
    }
    else
    {
        printf("Please enter a valid input\n");
    }

    return 0;
}
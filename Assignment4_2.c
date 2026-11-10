#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("%d is an even number\n",iNo);
    }
    else
    {
        printf("%d is an odd number\n",iNo);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    
    if(scanf("%d",&iValue) == 1)
    {
        CheckEvenOdd(iValue);
    }
    else
    {
        printf("Please enter valid number\n");
    }

    return 0;
}
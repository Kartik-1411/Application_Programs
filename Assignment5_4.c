#include<stdio.h>

void CheckMultipleDivisibility(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        printf("%d is divisible by both 3 and 5",iNo);
    }
    else if(iNo % 3 == 0)
    {
        printf("%d is divisible by 3 only",iNo);
    }
    else if(iNo % 5 == 0)
    {
        printf("%d is divisible by 5 only",iNo);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5",iNo);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    if(scanf("%d", &iValue) == 1)
    {
        CheckMultipleDivisibility(iValue);
        
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
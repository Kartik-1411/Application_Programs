#include<stdio.h>

void CheckNumber(int iNo)
{
    if(iNo < 0)
    {
        printf("%d is a negative number\n",iNo);
    }
    else if(iNo > 0)
    {
        printf("%d is a positive number\n",iNo);
    }
    else
    {
        printf("%d is zero",iNo);
    }
    
}


int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    
    if(scanf("%d",&iValue) == 1)
    {
        CheckNumber(iValue);
    }
    else
    {
        printf("Please enter valid number\n");
    }

    

    return 0;
}
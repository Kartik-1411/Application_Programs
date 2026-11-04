#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        printf("%d\n",iDigit);
    }
}



int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        DisplayDigits(iValue);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
#include<stdio.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f, fFinalAmount = 0.0f;

    if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
    }
    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = 0.1;
    }
    else
    {
        fDiscount = 0.2;
    }

    if(fDiscount > 0)
    {
        fFinalAmount = fAmount - (fAmount * fDiscount);
    }
    printf("Final amount after discount is %.2f",fFinalAmount);
}


int main()
{
    float fAmount = 0.0f;
    printf("Enter the purchase amount\n");
    if(scanf("%f",&fAmount) == 1)
    {
        if(fAmount > 0)
        {
            CalculateDiscount(fAmount);
        }
        else
        {
            printf("Amount should be greater than zero\n");
        }
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
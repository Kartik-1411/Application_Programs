#include<stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;
    dArea = iValue * 0.0929;
    return dArea; 
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet\n");

    if(scanf("%d", &iValue) == 1)
    {
        dRet = SquareMeter(iValue);
        printf("Area in square meter is %lf",dRet);
    }
    else
    {
        printf("Enter a valid number\n");
    }
    
    return 0;
}

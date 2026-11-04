#include<stdio.h>

float Percentage(int iTotal,int iObtained)
{
    float fPercent = 0.0f;
    fPercent = ((float)iObtained/iTotal) * 100;
    return fPercent;
}

int main()
{
    float fRet = 0.0f;
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the total marks and obtained marks(Separated by a space or Enter) : \n");
    if(scanf("%d %d",&iValue1,&iValue2) == 2)
    {
        fRet = Percentage(iValue1, iValue2);
        printf("Percentage is : %.2f %%",fRet);
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
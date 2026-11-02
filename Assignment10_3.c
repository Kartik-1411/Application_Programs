#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iDistance = 0;
    iDistance = iNo * 1000;
    return iDistance;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the distance\n");

    if(scanf("%d", &iValue) == 1)
    {
        iRet = KMtoMeter(iValue);
        printf("Distance in meters is %d",iRet);
    }
    else
    {
        printf("Enter a valid number\n");
    }
    
    return 0;
}

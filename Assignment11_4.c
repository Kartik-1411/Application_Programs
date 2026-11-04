#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt = 0, iSumEven = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSumEven = iSumEven + iCnt;
        }
    }
    return iSumEven;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    printf("Enter the starting and ending point(separated by a space or Enter \n");

    if(scanf("%d %d", &iValue1, &iValue2) == 2)
    {
        if(iValue1 < 0 || iValue2 < 0)
        {
            printf("Invalid range\n");
            printf("Negative numbers are not allowed\n");
        }
        else if(iValue1 > iValue2)
        {
            printf("Invalid range\n");
            printf("Starting point should be less than ending point\n.");
        }
        
        else
        {
            iRet = RangeSumEven(iValue1,iValue2);
            printf("Addition is : %d\n",iRet);
        }
    }
    else
    {
        printf("Either one or both inputs are invalid\n");
    }
    
    return 0;
}

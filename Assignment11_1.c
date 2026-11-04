#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting and ending point(separated by a space or Enter \n");

    if(scanf("%d %d", &iValue1, &iValue2) == 2)
    {
        if(iValue1 <= iValue2)
        {
            RangeDisplay(iValue1,iValue2);
        }
        else
        {
            printf("Starting point should be less than ending point\n.");
        }
    }
    else
    {
        printf("Either one or both inputs are invalid\n");
    }
    
    return 0;
}

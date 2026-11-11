#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo;iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}


int main()
{
    int iValue = 0;
    printf("Enter number elements : ");
    if(scanf("%d",&iValue) == 1)
    {
        Pattern(iValue);
    }
    else
    {
        printf("Enter valid input");
    }

    return EXIT_SUCCESS;
}
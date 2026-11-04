#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = (iNo/2); iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}


int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        FactRev(iValue);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    return 0;
}
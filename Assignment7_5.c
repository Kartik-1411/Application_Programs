#include<stdio.h>


void DisplayMultiples(int iNo)
{
    
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
    printf("\n");
}




int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    DisplayMultiples(iValue);
    
    return 0;
}

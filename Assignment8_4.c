#include<stdio.h>


int DisplayTable(int iNo)
{
    int iMult = 0;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
    
    
}




int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);
    DisplayTable(iValue);
    
    return 0;
}

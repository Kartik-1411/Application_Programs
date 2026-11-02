#include<stdio.h>


int DisplayTableRev(int iNo)
{
    int iMult = 0;
    int iCnt = 0;
    for(iCnt = 10; iCnt > 0; iCnt--)
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
    DisplayTableRev(iValue);
    
    return 0;
}

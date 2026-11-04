#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEqual(int iNo1,int iNo2)
{
    BOOL bFlag = FALSE;

    if(iNo1 == iNo2)
    {
        bFlag = TRUE;
    }

    return bFlag;

}

int main()
{
    BOOL bRet = FALSE;
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the two numbers(Separated by a space or Enter) : \n");
    if(scanf("%d %d",&iValue1,&iValue2) == 2)
    {
        bRet = CheckEqual(iValue1,iValue2);
    }
    else
    {
        printf("Enter valid input\n");
    }

    if(bRet == TRUE)
    {
        printf("%d is equal to %d",iValue1,iValue2);
    }
    else
    {
        printf("%d is not equal to %d",iValue1,iValue2);
    }
    

    return 0;
}
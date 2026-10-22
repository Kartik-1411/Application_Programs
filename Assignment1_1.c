#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    iAns = iNo1 / iNo2;

    return iAns;
}


int main()
{
    int iValue1 = 22,iValue2 = 5;
    int iRet = Divide(iValue1,iValue2);
    printf("Division is %d\n",iRet);

    return 0;
}
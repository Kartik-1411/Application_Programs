#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMult = 1;
    if(iNo1 == 0)
    {
        iMult = iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iMult = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iMult = iNo1 * iNo2;
    }
    else
    {
        iMult = iNo1 * iNo2 * iNo3;
    }
    return iMult;

}

int main()
{
    int iRet = 0, iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter the three numbers(Separated by a space or Enter) : \n");
    if(scanf("%d %d %d",&iValue1,&iValue2,&iValue3) == 3)
    {
        iRet = Multiply(iValue1, iValue2, iValue3);
        printf("Multiplication is : %d",iRet);
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
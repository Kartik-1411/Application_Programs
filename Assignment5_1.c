#include<stdio.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    int iGreatest = 0;
    if(iFirst > iSecond && iFirst > iThird)
    {
        iGreatest = iFirst;
    }
    else if(iSecond > iFirst && iSecond > iThird)
    {
        iGreatest = iSecond;
    }
    else
    {
        iGreatest = iThird;
    }
    printf("Greatest number is %d",iGreatest);
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers(separated by a space or Enter) : \n");
    if(scanf("%d %d %d", &iValue1, &iValue2, &iValue3) == 3)
    {
        FindGreatest(iValue1,iValue2,iValue3);
        
    }
    else
    {
        printf("Either one or two or all inputs are invalid\n");
    }

    return 0;
}
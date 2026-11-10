#include<stdio.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is greater than %d",iNo1,iNo2);
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is greater than %d",iNo2,iNo1);
    }
    else
    {
        printf("Both numbers are equal");
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the numbers (separated by a space or Enter) : \n");
    
    if(scanf("%d %d", &iValue1, &iValue2) == 2)
    {
        FindGreater(iValue1,iValue2);
    }
    else
    {
        printf("Either one or both of the inputs are invalid.\n");
    }

    return 0;
}
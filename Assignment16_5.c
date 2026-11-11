#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol && iNo <= (iRow * iCol); j++, iNo++)
        {
            printf("%d\t",iNo);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and number of columns (Separated by a space or Enter) : \n");
    printf("Number of rows and columns should be greater than zero\n");
    if(scanf("%d %d",&iValue1,&iValue2) == 2)
    {
        Pattern(iValue1,iValue2);
    }
    else
    {
        printf("Enter valid input");
    }

    return EXIT_SUCCESS;
}
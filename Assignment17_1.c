#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++,iNo++)
        {
            printf("%d\t",iNo);
            if(iNo == ((iRow*2) + 1))
            {
                iNo = 0;
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and number of columns (Separated by a space or Enter) : ");
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
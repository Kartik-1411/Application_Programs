#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    char ch = '\0';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch ='a', iNo = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",iNo);
                iNo++;
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
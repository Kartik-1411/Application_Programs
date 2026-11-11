#include<stdio.h>
#include<stdlib.h>

// First approach

// void Pattern(int iRow, int iCol)
// {
//     int i = 0, j = 0;

//     for(i = 1; i <= iRow; i++)
//     {
//         for(j = iCol; j >= 1; j--)
//         {
//             printf("%d\t",j);
//         }
//         printf("\n\n");
//     }
// }

// second approach

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n\n");
    }
}


// Third approach

// void Pattern(int iRow, int iCol)
// {
//     int i = 0, j = 0;

//     for(i = 1; i <= iRow; i++)
//     {
//         for(j = 1; j <= iCol; j++)
//         {
//             printf("%d\t",iCol-j+1);
//         }
//         printf("\n\n");
//     }
// }

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
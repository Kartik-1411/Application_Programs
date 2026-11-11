#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 1,ch = 'A';iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
}


int main()
{
    int iValue = 0;
    printf("Enter number elements : ");
    if(scanf("%d",&iValue) == 1)
    {
        Pattern(iValue);
    }
    else
    {
        printf("Enter valid input");
    }

    return EXIT_SUCCESS;
}
#include<stdio.h>

void CheckLeapYear(int iYear)
{   
    if(iYear < 1000)
    {
        printf("Enter a 4 digit year\n");
        return;
    }
    if((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
    {
        printf("%d is a leap year",iYear);
    }
    else
    {
        printf("%d is not a leap year",iYear);
    }
    
}


int main()
{
    int iYear = 0;

    printf("Enter the year: \n");
    if(scanf("%d", &iYear) == 1)
    {
        CheckLeapYear(iYear);
        
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
#include<stdio.h>

void CheckAdmisssion(float fMarks, int iAge)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks. Marks must be between 0-100\n");
    }
    if(iAge < 0)
    {
        printf("Invalid Age. Age must be positive\n");
    }
    if(fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible for admission\n");
    }
}


int main()
{
    float fValue1 = 0.0f;
    int iValue2 = 0;
    printf("Enter the marks and age (Separated by a Space or Enter) :\n");
    if(scanf("%f %d",&fValue1, &iValue2) == 2)
    {
        CheckAdmisssion(fValue1,iValue2);
    }
    else
    {
        printf("Either one or both inputs are invalid\n");
    }

    return 0;
}
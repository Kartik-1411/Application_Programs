#include<stdio.h>

void DisplayGrade(float fMarks)
{
    if(fMarks >= 90 && fMarks <= 100)
    {
        printf("Grade is : A\n");
    }
    else if(fMarks >= 75 && fMarks <= 89)
    {
        printf("Grade is : B\n");
    }
    else if(fMarks >= 60 && fMarks <= 74)
    {
        printf("Grade is : C\n");
    }
    else if(fMarks >= 40 && fMarks <= 59)
    {
        printf("Grade is : D\n");
    }
    else if(fMarks < 40)
    {
        printf("Fail\n");
    }
}


int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: \n");
    if(scanf("%f", &fMarks) == 1)
    {
        DisplayGrade(fMarks);
        
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
#include<stdio.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f, fBonusPercent = 0.0f;
    if(fSalary <= 0)
    {
        printf("Salary must be positive and greater than zero\n");
        return;
    }
    if(iYears <= 0)
    {
        printf("Years of service must be greater than zero\n");
        return;
    }
    if(iYears >= 1 && iYears < 5)
    {
        fBonusPercent = 0.05;
        fBonus = fSalary * fBonusPercent;
    }
    else if(iYears >= 5 && iYears < 10)
    {
        fBonusPercent = 0.1;
        fBonus = fSalary * fBonusPercent;
    }
    else
    {
        fBonusPercent = 0.15;
        fBonus = fSalary * fBonusPercent;
    }

    printf("Bonus is %.2f\n",fBonus);
}


int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
    printf("Enter Salary and years of service (Separated by a Space or Enter): \n");
    if(scanf("%f %d",&fSalary,&iYears) == 2)
    {
        CalculateBonus(fSalary,iYears);
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
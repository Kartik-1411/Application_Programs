#include<stdio.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid age.\n");
        return;
    }
    else if(iAge >= 18)
    {
        printf("Eligible to vote\n");
    }
    else
    {
        printf("Not Eligible to vote\n");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the age : \n");
    if(scanf("%d",&iValue) == 1)
    {
        CheckVotingEligibility(iValue);
    }
    else
    {
        printf("Please enter a valid input\n");
    }

    return 0;
}
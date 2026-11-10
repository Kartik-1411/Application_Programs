#include<stdio.h>

void CalculateElectricityBill(int iUnitsConsumed)
{
    float fBill = 0.0f;
    int iCnt = 0;

    if(iUnitsConsumed >= 0 && iUnitsConsumed <= 100)
    {
        fBill = iUnitsConsumed * 5;
    }
    else if(iUnitsConsumed > 100 && iUnitsConsumed <= 200)
    {
        fBill = (100 * 5) + ((iUnitsConsumed - 100) * 7);
    }
    else if(iUnitsConsumed > 200)
    {
        fBill = 1200 + ((iUnitsConsumed - 200) * 10);
    }
    
    printf("Electricity bill is %.2f",fBill);
}

int GetValidUnits()
{
    int iUnits = 0;
    while(1)
    {
        if(scanf("%d",&iUnits) == 1)
        {
            if(iUnits < 0)
            {
                printf("Negative units are invalid.\n");
                printf("Enter positive units.\n");
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            printf("Invalid input\n");
        }
        
        return iUnits;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter consumed units: \n");
    iValue = GetValidUnits();
    
    CalculateElectricityBill(iValue);

    return 0;
}
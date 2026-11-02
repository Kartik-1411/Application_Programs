#include<stdio.h>

double FhToCs(float fTemp)
{
    double dAns = 0.0;
    dAns = (fTemp -32) * ((float)5/9);
    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the temperature in Farenheit\n");

    if(scanf("%f", &fValue) == 1)
    {
        dRet = FhToCs(fValue);
        printf("Temperature in celcius is %lf",dRet);
    }
    else
    {
        printf("Enter a valid number\n");
    }
    
    return 0;
}

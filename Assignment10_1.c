#include<stdio.h>
#define PI 3.14

double CircleArea(float Radius)
{
    double dArea = 0.0;
    dArea = PI * Radius * Radius;
    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter the radius : \n");
    if(scanf("%f",&fValue) == 1)
    {
        dRet = CircleArea(fValue);
        printf("Area of circle is %lf",dRet);
    }
    else
    {
        printf("Enter valid radius\n");
    }
    
    return 0;
}

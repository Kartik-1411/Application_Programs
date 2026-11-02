#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;
    printf("Enter the width and height separated by a space or Enter: \n");

    if(scanf("%f %f", &fValue1, &fValue2) == 2)
    {
        dRet = RectArea(fValue1,fValue2);
        printf("Area of Rectangle is %lf",dRet);
    }
    else
    {
        printf("One or both of the inputs were not valid numbers\n");
    }
    
    return 0;
}

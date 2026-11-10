#include<stdio.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid triangle\n");
    }
    else if(((iSide1 + iSide2) <= iSide3) || ((iSide2 + iSide3) <= iSide1) || ((iSide1 + iSide3) <= iSide2))
    {
        printf("Invalid triangle\n");
    } 
    else
    {
        printf("Valid triangle");
    }
}



int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    printf("Enter three sides (Separated by a Space or Enter) :\n");
    if(scanf("%d %d %d",&iSide1,&iSide2,&iSide3) == 3)
    {
        CheckTriangle(iSide1,iSide2,iSide3);
    }
    else
    {
        printf("Enter valid input\n");
    }

    return 0;
}
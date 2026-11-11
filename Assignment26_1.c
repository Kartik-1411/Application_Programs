#include<stdio.h>
#include<stdlib.h>


void DisplayASCII()
{   
    int iCnt = 0;
    printf("dec\thex\toct\tchar\n");
    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%d\t%x\t%o\t%c",iCnt,iCnt,iCnt,iCnt);
        printf("\n");
    }

}


int main()
{

    DisplayASCII();    

    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>


void DisplaySchedule(char ch)
{
    if((ch >= 'a') && (ch <='z'))
    {
        ch = ch - 32;
    }

    switch(ch)
    {
        case 'A':
            printf("Your exam is at 7 AM\n");
            break;
        case 'B':
            printf("Your exam is at 8:30 AM\n");
            break;
        case 'C':
            printf("Your exam is at 9:20 AM\n");
            break;
        case 'D':
            printf("Your exam is at 10:30 AM\n");
            break;
        default:
            printf("Enter valid division\n");
    }

}


int main()
{
    char cValue = '\0';

    printf("Enter your division :  ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);    

    return EXIT_SUCCESS;
}
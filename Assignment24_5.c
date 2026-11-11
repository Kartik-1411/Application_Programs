#include<stdio.h>
#include<stdlib.h>

void strRevX(char *str)
{
    char * temp = str;
    char ch = '\0';
    while(*str != '\0')
    {
        str++;
    }
    str--;
    while(temp < str)
    {
        ch = *temp;
        *temp = *str;
        *str = ch;
        
        temp++;
        str--;       
    }
}


int main()
{
    char Arr[50];

    printf("Enter the string :  ");
    scanf("%[^\n]s",Arr);

    strRevX(Arr);

    printf("Reversed string is : '%s'\n",Arr);
    

    return EXIT_SUCCESS;
}
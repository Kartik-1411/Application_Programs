#include<stdio.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }
}


int main()
{
    char cValue = '\0';
    char cExtra = '\0';
    printf("Enter a character: \n");
    scanf("%c%c",&cValue, &cExtra);
    
    if(cExtra != '\n')
    {
        printf("Enter a single character to check its type.\n");
    }
    else
    {
        CheckCharacterType(cValue);
    }

    return 0;
}
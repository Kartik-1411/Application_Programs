#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the character : ");
    scanf("%c",&cValue);
    bRet = ChkVowel(cValue);
    if(bRet == true)
    {
        printf("%c is a vowel\n",cValue);
    }
    else
    {
        printf("%c is not a vowel\n",cValue);
    }
    return 0;
}
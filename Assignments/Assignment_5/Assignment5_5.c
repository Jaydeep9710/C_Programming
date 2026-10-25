#include <stdio.h>
#include <stdlib.h>

void CheckCharcterType(char cValue)

{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowerercase Alphabet");
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit");   
    }
    else
    {
        printf("Special Case");
    }



}

int main()

{

        char cValue ='\0';

        printf("Enter a character: ");
        scanf("%c", &cValue);

        CheckCharcterType(cValue);

        return EXIT_SUCCESS;
}
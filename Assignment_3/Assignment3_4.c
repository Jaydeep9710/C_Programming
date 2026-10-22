// Q4  Accept one character from user and convert case of that character

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if(cValue>='a' && cValue<='z' )
    {
         printf("%c",toupper((unsigned char)cValue));
    }
    else if (cValue>='A' && cValue<='Z' )
    {
         printf("%c",tolower((unsigned char)cValue));
    }
}
int main()
{

    char cValue ='\0';

    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return EXIT_SUCCESS;
}

// Tested test Cases
    // -----------------------------------------------
    //    Input         Output     
    //-------------------------------------------------
    //     a             A
    //     D             d
/////////////////////////////////////////////////////
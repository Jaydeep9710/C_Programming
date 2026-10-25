#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue>0)
    {
        printf("It is Positive Number ");
    }
    else if(iValue==0)
    {
        printf("It is Zero  ");
    }
    else
    {
         printf("It is Negative Number "); 
    }
}

int main()

{

int iValue = 0;



printf("Enter a number: ");

scanf("%d", &iValue);

CheckNumber(iValue);

return EXIT_SUCCESS;
}
// Q1 Check Whether a Number Is Positive or Negative or Zero

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
////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input          Output     
    //-------------------------------------------------
    //     10          Positive Number
    //      11         Positive Number  
    //      0           Zero
    //     -9          Positive Number
    //      20         Positive Number
    //     -20         Positive Number
///////////////////////////////////////////////////// 
// Q2 Check Even or Odd Number

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("It is Even Number ");
    }
    else
    {
         printf("It is Odd Number "); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input          Output     
    //-------------------------------------------------
    //    10         Even Number
    //    11         Odd Number  
    //    0          Even Number
    //   -9          Odd Number
    //    20         Even Number
    //   -20         Even Number
/////////////////////////////////////////////////////
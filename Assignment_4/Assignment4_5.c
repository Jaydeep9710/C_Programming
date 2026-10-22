// Q5 Check Divisibility by 5

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5==0)
    {
        printf("Divisible by 5 ");
    }
    else
    {
         printf("Not Divisible by 5 "); 
    }
}

int main()
{

    int iValue = 0;

    printf("Enter your number: ");

    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input          Output     
    //-------------------------------------------------
    //    45          Divisible by 5
    //    23          Not Divisible by 5 
    //    -5          Divisible by 5
/////////////////////////////////////////////////////
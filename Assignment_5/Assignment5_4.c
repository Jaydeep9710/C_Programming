// Q4 Check Divisibility by 3 and 5

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)

{
    if(iValue % 3==0 && iValue % 5==0)
    {
        printf("Divisible by Both");
    }
    else if(iValue % 3==0)
    {
        printf("Divisible By 3 only");
    }
    else if(iValue % 5==0)
    {
        printf("Divisible By 5 only");   
    }
    else
    {
        printf("Not Divisible By Either");
    }

}

int main()

{

        int  iValue =0;

        printf("Enter number: ");
        scanf("%d", &iValue);

        CheckMultipleDivisibility(iValue);

        return EXIT_SUCCESS;
}
////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input: 15               
    //   Output: Divisible by Both

    //
    //    Input:  9             
    //   Output:  Divisible by 3 Only

    //     
    //    Input:  10            
    //   Output: Divisible by 5 Only

    //    Input:  7            
    //   Output: Not Divisible by Either

    //          
/////////////////////////////////////////////////////
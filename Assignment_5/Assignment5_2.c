// Q2 Check Leap Year

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 400==0) ||(iYear % 4 ==0) && (iYear % 100!=0))
    {
        printf(" Is Leap Year\n ");
    }
    else
    {
           printf(" Is Not Leap Year\n ");
    }
}
int main()
{
    int iYear=0;

    printf("Enter Year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input: 2024               
    //   Output: Leap Year

    //
    //    Input:  1900             
    //   Output: Not a Leap Year

    //     
    //    Input:  2000            
    //   Output: Leap Year

    //          
/////////////////////////////////////////////////////
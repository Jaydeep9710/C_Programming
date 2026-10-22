// Q4 Check Voting Eligibility

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge>=18)
    {
        printf("The person is eligible to vote ");
    }
    else
    {
         printf("The person is  not eligible to vote "); 
    }
}

int main()
{

    int iAge = 0;

    printf("Enter your age: ");

    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input          Output     
    //-------------------------------------------------
    //    21          Eligible for Voting
    //    16          Not Eligible for Voting  
    //    -5          Invalid Age
/////////////////////////////////////////////////////
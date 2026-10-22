// Q2 Check Admission Eligibility

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks > 100.0f || fMarks < 0.0f || iAge < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if (fMarks >= 60.0f && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible for Admission\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input: 75 18               
    //   Output: Eligible for Admission

    //
    //    Input:  55 19             
    //   Output:  not eligible

    //     
    //    Input:  80 16            
    //   Output: Not Eligible

    

    //          
/////////////////////////////////////////////////////
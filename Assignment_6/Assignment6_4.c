// Q4 Check Triangle Validity

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if (iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid Triangle\n");
    }
    else if ((iSide1 + iSide2 > iSide3) &&
             (iSide1 + iSide3 > iSide2) &&
             (iSide2 + iSide3 > iSide1))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input: 3 4 5               
    //   Output: Valid Triangle

    //
    //    Input:  1 2 3             
    //   Output:  Invalid Triangle

    //     
    //    Input:  0 4 5           
    //   Output: Invalid Triangle

    

    //          
/////////////////////////////////////////////////////
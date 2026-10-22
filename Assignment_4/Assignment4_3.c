// Q3 Find the Greater of Two Numbers

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf(" %d is greater\n ",iFirst);
    }
    else if(iSecond > iFirst)
    {
         
         printf("%d is greater\n ",iSecond); 
    }
    else
    {
         printf(" %d Both are equal\n "); 
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d  %d", &iValue1 , &iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // Step5:Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input1      Input2    Output     
    //-------------------------------------------------
    //     10          11       21
    //      14         0        14
    //      0          11       11
    //     -9         -20      -9
    //      20         0        20
    //     -20        -11      -11
///////////////////////////////////////////////////// 
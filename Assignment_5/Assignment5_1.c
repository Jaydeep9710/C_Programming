// Q1 Find the Greatest of Three Numbers

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst>iSecond)&&(iFirst>iThird))
    {
        printf("%d is greatest \n",iFirst);
    }
    else if((iSecond>iFirst)&&(iSecond>iThird))
    {
          printf("%d is greatest \n",iSecond);
    }
    else
    {
           printf("%d is greatest \n",iThird);
    }
}
int main()
{
    int iValue1=0, iValue2=0, iValue3=0;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input: 10 50 30               
    //   Output: 50 is Greatest

    //
    //    Input:  40 40 20             
    //   Output: 40 is Greatest

    //     
    //    Input:  15 15 15             
    //   Output: 15 is Greatest

    //          
/////////////////////////////////////////////////////
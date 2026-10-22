// Q4 Accept One number and check whether is divisible by 5 or not

#include <stdio.h>
#include <stdlib.h>
typedef  int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
    {
        int iValue =0;
        BOOL bRet=FALSE;

        printf("Enter Number : \n");
        scanf("%d",&iValue);

        bRet=Check(iValue);

        if(bRet == TRUE)
        {
            printf("Divisible by 5");
        }
        else
        {
            printf("Not Divisible by 5");
        }
        return EXIT_SUCCESS;
    }

    //        Tested test cases
    //------------------------------------------
    //    Input         Output
    //----------------------------------   
    //      10            Divisible by 5
    //      16            Not Divisible by 5
    //      25            Divisible by 5
    //      75            Divisible by 5
    //      7             Not Divisible by 5
    //
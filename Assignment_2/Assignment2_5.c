// Q5 Accept number from user and check whether number is even or odd

#include <stdio.h>
#include <stdlib.h>

typedef  int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
    if((iNo % 2)==0)
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

        bRet=ChkEven(iValue);

        if(bRet == TRUE)
        {
            printf("Given Number is Even");
        }
        else
        {
            printf("Given Number is Odd");
        }
        return EXIT_SUCCESS;
    }

    ////////////////////////////////////////////////
    //
    // 
    // Tested test Cases
    // -----------------------------------------------
    //    Input          Output     
    //-------------------------------------------------
    //      4              even
    //      19             odd 
    //      7              odd
    //      12             even 
    //       5             odd    
/////////////////////////////////////////////////////

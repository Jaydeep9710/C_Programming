// Q2 Accept one number from user and print that number of * on screen

#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    

    while(iNo>0)
    {
        printf(" * ");
        iNo--;
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // 
    // Tested test Cases
    // -----------------------------------------------
    //    Input1          Output     
    //-------------------------------------------------
    //      4             * * * * 
    //      7             * * * * * * * 
    //      10            * * * * * * * * * * *
    //      3             * * *      
/////////////////////////////////////////////////////
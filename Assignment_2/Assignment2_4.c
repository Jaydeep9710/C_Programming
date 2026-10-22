// Accept two numbers from user and display first number in second number of times.

#include<stdio.h>
#include<stdlib.h>
void Display(int iNo,int iFrequency)
{
    
      int no=0;
    for(no=1 ;no<=iFrequency; no++)
    {
        printf("%d",iNo);
    }
    
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return EXIT_SUCCESS;
}

////////////////////////////////////////////////
    //
    // 
    // Tested test Cases
    // -----------------------------------------------
    //     Input :   12  5           
    //     Output :  12 12 12 12 12
    //      
    //     Input :   -2  3
    //     Output :  -2 -2 -2
    //   
    //     Input :   21  -3
    //     Output :  21 21 21
    // 
    //     Input :   -2  0
    //     Input :
/////////////////////////////////////////////////////
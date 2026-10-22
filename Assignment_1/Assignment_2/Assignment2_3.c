// Q3 Accept on number from user if number is less than 10 print "Hello" otherwise print "Demo" 

#include<stdio.h>
#include<stdlib.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
         printf("Hello");
    }
    else
    {
        printf("Demo");
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
    //      1              Hello
    //      19             Demo 
    //      7              Hello
    //      12             Demo     
/////////////////////////////////////////////////////
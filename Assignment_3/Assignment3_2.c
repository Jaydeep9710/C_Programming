// Q2 write a program which accept number from user and print even factor of that number

#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for( i=1; i<= iNo/2;i++)
    {
       if(iNo%i==0 )
       {
        printf("%d ", i);
       }
    }
}
int main()
{

    int iValue =0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//
// Tested test Cases
//----------------------------------
//   Input: 24
//  Output: 1 2 4 6 8 12
//
//   Input: 8
//  Output: 1 2 4
//
//   Input: 17
//  Output: 1
//
///////////////////////////////////////////////////////
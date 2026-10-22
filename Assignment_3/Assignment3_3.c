// Q3 Write a program which accept number from user and print even factors of that number

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFactor(int iNo)
{
    int i=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for( i=1; i< iNo;i++)
    {
       if((iNo % i == 0) && (i % 2 == 0) )
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

    DisplayEvenFactor(iValue);
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//
// Tested test Cases
//----------------------------------
//   Input: 36
//  Output: 2 6 12 18
//
//   Input: 12
//  Output: 2 4 6
//
//   Input: -9
//  Output: 
//
///////////////////////////////////////////////////////
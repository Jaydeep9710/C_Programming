// Q1 1.Write a program which accept one number from user and print that number of even numbers on screen.

#include <stdio.h>
#include <stdlib.h>

void PrintEven(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        return;
    }
    for (i = 1; i <= iNo; i++)
    {
        printf("%d ", 2 * i);
    }
}
int main()
{

    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////
//
// Tested test Cases
//----------------------------------
//   Input: 7
//  Output: 2 4 6 8 10 12 14
//
//   Input: 15
//  Output: 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30
//
//   Input: 3
//  Output: 2 4 6
//
///////////////////////////////////////////////////////
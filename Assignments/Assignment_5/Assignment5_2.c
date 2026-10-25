#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 400==0) ||(iYear % 4 ==0) && (iYear % 100!=0))
    {
        printf(" Is Leap Year\n ");
    }
    else
    {
           printf(" Is Not Leap Year\n ");
    }
}
int main()
{
    int iYear=0;

    printf("Enter Year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);
    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)

{
    if(iValue % 3==0 && iValue % 5==0)
    {
        printf("Divisible by Both");
    }
    else if(iValue % 3==0)
    {
        printf("Divisible By 3 only");
    }
    else if(iValue % 5==0)
    {
        printf("Divisible By 5 only");   
    }
    else
    {
        printf("Not Divisible By Either");
    }

}

int main()

{

        int  iValue =0;

        printf("Enter number: ");
        scanf("%d", &iValue);

        CheckMultipleDivisibility(iValue);

        return EXIT_SUCCESS;
}
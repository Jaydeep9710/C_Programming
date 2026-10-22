// Q1 Calculate Electricity Bill

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid input: units cannot be negative\n");
        return;
    }

    if (iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }

    printf("Bill: %.2f\n", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
////////////////////////////////////////////////
    //
    // Test the Program
    // Tested test Cases
    // -----------------------------------------------
    //    Input: 80               
    //   Output: Bill 400.0

    //
    //    Input:  150             
    //   Output:  Bill 850.0

    //     
    //    Input:  250            
    //   Output: Bill 1700.0

    

    //          
/////////////////////////////////////////////////////
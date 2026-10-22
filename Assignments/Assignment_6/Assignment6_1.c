/**************************************************
 *
 * Function Name : CalculateElectricityBill
 * Description   : Calculates the electricity bill based on the units consumed
 * Input         : Integer value (units)
 * Output        : The calculated electricity bill
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.00f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.00f) + ((iUnits - 200) * 10.00f);
    }

    printf("Electricity Bill: %f\n", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
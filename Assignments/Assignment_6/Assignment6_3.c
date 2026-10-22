/**************************************************
 *
 * Function Name : CalculateDiscount
 * Description   : Calculates the discount based on the purchase amount
 * Input         : Float value (amount)
 * Output        : The calculated discount and final amount
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Purchase Amount\n");
        return;
    }

    if (fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
    }
    else if (fAmount >= 5000)
    {
        fDiscount = fAmount * 0.20f;
    }

    fFinalAmount = fAmount - fDiscount;

    printf("Payable Amount = %f\n", fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
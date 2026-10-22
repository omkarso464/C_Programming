/**************************************************
 *
 * Function Name : CalculateBonus
 * Description   : Calculates the bonus based on the salary and years of service
 * Input         : Float value (salary) and integer value (years)
 * Output        : The calculated bonus
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
    }
    else if (iYears > 10)
    {
        fBonus = fSalary * 0.15f;
        printf("Bonus = %f\n", fBonus);
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
        printf("Bonus = %f\n", fBonus);
    }
    else
    {
        fBonus = fSalary * 0.05f;
        printf("Bonus = %f\n", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
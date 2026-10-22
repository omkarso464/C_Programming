/**************************************************
 *
 * Function Name : CheckLeapYear
 * Description   : Checks if a year is a leap year
 * Input         : Integer value (year)
 * Output        : Whether the year is a leap year
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 4 == 0))
    {
        printf("%d is a Leap Year.\n", iYear);
    }
    else
    {
        printf("%d is not a Leap Year.\n", iYear);
    }

}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
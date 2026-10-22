/**************************************************
 *
 * Function Name : CheckEvenOdd
 * Description   : Checks if a number is even or odd
 * Input         : Integer value
 * Output        : Whether the number is even or odd
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if (iValue % 2 == 0)
    {
        printf("Even Number.\n");
    }
    else
    {
        printf("Odd Number.\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
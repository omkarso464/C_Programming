/**************************************************
 *
 * Function Name : CheckNumber
 * Description   : Checks if a number is positive, negative, or zero
 * Input         : Integer value
 * Output        : The nature of the number
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/
    
#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue < 0)
    {
        printf("The number is negative.\n");
    }
    else if (iValue > 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
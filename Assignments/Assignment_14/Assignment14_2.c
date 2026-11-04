/**************************************************
 *
 * Function Name : FactRev
 * Description   : This function takes an integer number as input and prints all its factors in reverse order.
 * Input         : Integer number
 * Output        : Prints all factors of the number in reverse order
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void FactRev(int iNo)
{
    int iCntr = 0;

    for(iCntr = iNo / 2; iCntr >= 1; iCntr--)
    {
        if(iNo % iCntr == 0)
        {
            printf("%d\t", iCntr);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}
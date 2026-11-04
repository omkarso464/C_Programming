/**************************************************
 *
 * Function Name : RangeDisplay
 * Description   : Displays numbers in a given range
 * Input         : Integer values (iStart, iEnd)
 * Output        : Numbers in the specified range
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCntr = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
    }
    else
    {
        for(iCntr = iStart; iCntr <= iEnd; iCntr++)
        {
            printf("%d ", iCntr);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}
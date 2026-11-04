/**************************************************
 *
 * Function Name : RangeDisplayRev
 * Description   : Displays numbers in a given range in reverse order
 * Input         : Integer values (iStart, iEnd)
 * Output        : Numbers in the specified range in reverse order
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCntr = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
    }
    else
    {
        for(iCntr = iEnd; iCntr >= iStart; iCntr--)
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

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}
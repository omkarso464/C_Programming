/**************************************************
 *
 * Function Name : RangeSumEven
 * Description   : Calculates the sum of even numbers in a given range
 * Input         : Integer values (iStart, iEnd)
 * Output        : The sum of even numbers in the specified range
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    if(iStart <= 0 || iEnd <= 0 || iStart > iEnd)
    {
        return -1;
    }

    for (int iCntr = iStart; iCntr <= iEnd; iCntr++)
    {
        if(iCntr % 2 == 0)
        {
            iSum = iSum + iCntr;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return EXIT_SUCCESS;
}
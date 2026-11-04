/**************************************************
 *
 * Function Name : CountRange
 * Description   : Counts the number of digits in the given integer number that are greater than 3 and less than 7
 * Input         : An integer number
 * Output        : Returns the count of digits in the number that are greater than 3 and less than 7
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
/**************************************************
 *
 * Function Name : CountDiff
 * Description   : Calculates the difference between the sum of even digits and the sum of odd digits in the given integer number
 * Input         : An integer number
 * Output        : Returns the difference between the sum of even digits and the sum of odd digits
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>



int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iEvenSum - iOddSum;


    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
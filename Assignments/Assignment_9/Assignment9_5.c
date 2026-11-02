/**************************************************
 *
 * Function Name : FactorialDiff
 * Description   : Calculates the difference between the factorial of even and odd numbers
 * Input         : Integer value (iNo)
 * Output        : The difference between the factorial of even and odd numbers
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;

    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}
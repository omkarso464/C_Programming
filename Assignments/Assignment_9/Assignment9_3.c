/**************************************************
 *
 * Function Name : EvenFactorial
 * Description   : Calculates the factorial of even numbers
 * Input         : Integer value (iNo)
 * Output        : The factorial of even numbers
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}
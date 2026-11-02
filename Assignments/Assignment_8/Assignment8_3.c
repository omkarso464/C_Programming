/**************************************************
 *
 * Function Name : Factorial
 * Description   : Calculates the factorial of the input number
 * Input         : Integer value (iNo)
 * Output        : The factorial of the number printed on the console
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCntr = 0;
    int iSum = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCntr = iNo; iCntr >= 1; iCntr--)
    {
        iSum = iSum * iCntr;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}
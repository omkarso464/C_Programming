/**************************************************
 *
 * Function Name : SquareMeter
 * Description   : Converts square feet to square meters
 * Input         : Integer value (iValue)
 * Output        : The equivalent value in square meters
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;

    dSqMeter = iValue * 0.0929;

    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %f\n", dRet);

    return 0;
}
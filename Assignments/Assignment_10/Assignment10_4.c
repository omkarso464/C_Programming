/**************************************************
*
* Function Name : FhtoCs
* Description   : Converts temperature from Fahrenheit to Celsius
* Input         : Float value (fTemp)
* Output        : The equivalent temperature in Celsius
* Author        : Omkar Santosh Sonawane
* Date          : 2/11/2026
*
**************************************************/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dResult = 0.0;

    dResult = (fTemp - 32) * 5 / 9;
    return dResult;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %f\n", dRet);

    return 0;
}
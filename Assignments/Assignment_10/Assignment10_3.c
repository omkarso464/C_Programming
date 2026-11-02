/**************************************************
 *
 * Function Name : KMtoMeter
 * Description   : Converts kilometers to meters
 * Input         : Integer value (iNo)
 * Output        : The equivalent value in meters
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iResult = 0;

    iResult = iNo * 1000;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d\n", iRet);

    return 0;
}
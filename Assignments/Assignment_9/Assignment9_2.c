/**************************************************
 *
 * Function Name : DollarToINR
 * Description   : Converts USD to INR
 * Input         : Integer value (iNo)
 * Output        : The converted value in INR
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>

int DollarToINR(int iNo)
{    
    int iDollar = 70;
    int iConvertor = 0;


    iConvertor = iNo * iDollar;
    
    return iConvertor;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD :");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}
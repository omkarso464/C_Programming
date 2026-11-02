/**************************************************
 *
 * Function Name : Display
 * Description   : Displays '*' and '#' in a pattern
 * Input         : Integer value (iNo)
 * Output        : The pattern printed on the console
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
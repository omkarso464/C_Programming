/**************************************************
 *
 * Function Name : DisplayDigit
 * Description   : This function takes an integer as input and displays each digit of the number on a new line.
 * Input         : Integer number
 * Output        : Each digit of the number printed on a new line
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/


#include <stdio.h>
#include <stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}
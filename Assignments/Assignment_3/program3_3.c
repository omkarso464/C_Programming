/**************************************************
 *
 * Function Name : DisplayEvenFactor
 * Description   : Displays the even factors of a given number
 * Input         : Integer value
 * Output        : Even factors of the input number
 * Author        : Omkar Santosh Sonawane
 * Date          : 21/10/2026
 *
 **************************************************/

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo/2 ; i++)
    {
        if ((iNo % i == 0) && (iNo % 2 == 0))
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
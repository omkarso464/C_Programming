/**************************************************
 *
 * Function Name : PrintEven
 * Description   : Prints the first n even numbers
 * Input         : Integer value
 * Output        : First n even numbers
 * Author        : Omkar Santosh Sonawane
 * Date          : 21/10/2026
 *
 **************************************************/

#include <stdio.h>

void PrintEven(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }

    int iCnt = 0 ;
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d ", iCnt * 2);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
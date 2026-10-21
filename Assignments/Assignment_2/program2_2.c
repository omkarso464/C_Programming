/**************************************************
 *
 * Function Name : Display
 * Description   : Displays * based on the input number
 * Input         : Integer value
 * Output        : "*"
 * Author        : Omkar Santosh Sonawane 
 * Date          : 21/10/2026
 *
 **************************************************/


#include <stdio.h>

void Display(int iNo)
{
    while( iNo > 0 )
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue );

    Display(iValue);

    return 0;
}

/**************************************************
 *
 * Function Name : Display
 * Description   : This function takes a character as input and displays its decimal, octal, and hexadecimal values.
 * Input         : A character
 * Output        : The decimal, octal, and hexadecimal values of the input character
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal      : %d\n", ch);
    printf("Octal        : %04o\n", ch);
    printf("Hexadecimal  : 0X%02X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
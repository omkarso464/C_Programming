/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of characters starting from 'A' up to the number of elements specified by the user. It prints each character on a new line.
 * Input         : Number of elements
 * Output        : Displays the pattern on the screen
 * Author        : Omkar Santosh Sonawane
 * Date          : 18/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
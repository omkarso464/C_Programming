/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of even numbers in a grid. It prints the even number for each position in the grid.
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

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i*2);
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
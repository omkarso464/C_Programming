/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of numbers in a grid. For the first and last rows, and the first and last columns, it prints the column number. For all other positions, it prints an asterisk '*'.
 * Input         : Number of rows and columns
 * Output        : Displays the pattern on the screen
 * Author        : Omkar Santosh Sonawane
 * Date          : 18/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i <= j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
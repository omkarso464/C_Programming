/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of '#' and '*' characters in a grid.
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
            if( i + j > 5)
            {
                printf("#\t", j);
            }
            else
            {
                printf("*\t", i);
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
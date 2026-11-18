/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of '*' characters in a grid. It prints '*' for positions where the row number is equal to the column number, or where the row number is 1 or the last row, or where the column number is 1 or the last column.
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
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else if(i + j <= iRow)
            {
                printf("#\t");
            }
            else if(i + j == iRow + 1)
            {
                printf("*\t");
            }
            else
            {
                printf("$\t");
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
/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of numbers in a grid. For odd rows, it prints even numbers starting from 2, and for even rows, it prints odd numbers starting from 1.
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
    int iNum = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iNum = 2;
        }
        else
        {
            iNum = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);

            iNum = iNum + 2;
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
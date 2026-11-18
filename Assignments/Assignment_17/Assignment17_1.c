/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of numbers in a grid. The numbers start from 1 and increment by 1 for each cell, but reset to 1 after reaching 9.
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
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);
            if(iNum == 9)
            {
                iNum = 1;
            }
            else
            {
                iNum++;
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
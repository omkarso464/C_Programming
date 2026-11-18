/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of characters in a grid. For even rows, it prints lowercase letters, and for odd rows, it prints uppercase letters.
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
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
        {
            if (i % 2 == 0)
            {
                printf("%c\t", ch + 32);
            }
            else
            {
                printf("%c\t", ch);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter numbers of Rows and Columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
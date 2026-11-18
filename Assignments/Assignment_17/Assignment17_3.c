/**************************************************
 *
 * Function Name : Pattern
 * Description   : This function prints a pattern of characters in a grid. For odd rows, it prints lowercase letters starting from 'a', and for even rows, it prints numbers starting from 1.
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
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {  
        if(i % 2 != 0)
        {
            ch = 'A';
        }
        else
        {
            iNum = 1;
        }

        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", iNum);
                iNum = iNum + 1;
            }
            else
            {
                printf("%c\t", ch + 32);
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
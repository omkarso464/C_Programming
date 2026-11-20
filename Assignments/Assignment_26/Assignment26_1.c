/**************************************************
 *
 * Function Name : DisplayASCII
 * Description   : This function displays the ASCII values of characters from 0 to 255 in decimal, hexadecimal, and octal formats.
 * Input         : None
 * Output        : The ASCII values of characters from 0 to 255 in decimal, hexadecimal, and octal formats
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t\t%o\t", i, i, i);

        if(i >= 32 && i <= 126)
        {
            printf("%c\n", i);
        }
        else if(i <= 31 || i == 127)
        {
            printf("Non-printable\n");
        }
        else
        {
            printf("Extended\n");
        }
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
/**************************************************
 *
 * Function Name : DisplayDigit
 * Description   : This function displays all the digits in a string.
 * Input         : A string
 * Output        : The digits in the string
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}
/**************************************************
 *
 * Function Name : strtogglerx
 * Description   : This function toggles the case of all letters in a string.
 * Input         : A string
 * Output        : The modified string with the case of all letters toggled
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void strtogglerx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    strtogglerx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
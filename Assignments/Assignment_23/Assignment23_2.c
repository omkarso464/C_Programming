/**************************************************
 *
 * Function Name : struprx
 * Description   : This function converts all lowercase letters in a string to uppercase.
 * Input         : A string
 * Output        : The modified string with all lowercase letters converted to uppercase
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
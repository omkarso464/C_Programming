/**************************************************
 *
 * Function Name : strlwrx
 * Description   : This function converts all uppercase letters in a string to lowercase.
 * Input         : A string
 * Output        : The modified string with all uppercase letters converted to lowercase
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/


#include<stdio.h>
#include<stdlib.h>


void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;

}
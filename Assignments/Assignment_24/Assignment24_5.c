/**************************************************
 *
 * Function Name : StrRevX
 * Description   : This function reverses a string in place.
 * Input         : A string
 * Output        : The modified string with characters in reverse order
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
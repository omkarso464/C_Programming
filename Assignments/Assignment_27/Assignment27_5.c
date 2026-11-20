/**************************************************
 *
 * Function Name : Reverse
 * Description   : This function reverses a given string and prints it.
 * Input         : A string
 * Output        : The reversed string
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(end >= str)
    {
        printf("%c", *end);
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    Reverse(arr);
    printf("\n");

    return EXIT_SUCCESS;
}
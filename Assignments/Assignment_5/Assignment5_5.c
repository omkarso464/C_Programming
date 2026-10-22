/**************************************************
 *
 * Function Name : CheckCharacterType
 * Description   : Checks the type of a character
 * Input         : Character value
 * Output        : The type of the character
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if ((cValue >= 'A' && cValue <= 'Z'))
    {
        printf("Uppercase Alphabet.\n");
    }
    else if ((cValue >= 'a' && cValue <= 'z'))
    {
        printf("Lowercase Alphabet.\n");
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("Digit.\n");
    }
    else
    {
        printf("Special Character.\n");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
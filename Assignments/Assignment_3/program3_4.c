/**************************************************
 *
 * Function Name : DisplayConvert
 * Description   : Converts uppercase letters to lowercase and vice versa
 * Input         : Character value
 * Output        : Converted character
 * Author        : Omkar Santosh Sonawane 
 * Date          : 21/10/2026
 *
 **************************************************/

#include <stdio.h>

void DisplayConvert( char CValue)
{
    if (CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue -32);
    }
    else if ( CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue +32);
    }
}

int main()
{
    char cValue = '\0';   // " \0 " --> Character variable declaration and initialization

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert (cValue);

    return 0;
}
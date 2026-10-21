/**************************************************
 *
 * Function Name : ChkVowel
 * Description   : Checks whether the input character is a vowel or not
 * Input         : Character value
 * Output        : TRUE if the character is a vowel, FALSE otherwise
 * Author        : Omkar Santosh Sonawane
 * Date          : 21/10/2026
 *
 **************************************************/

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if ((CValue == 'a') || (CValue == 'e') || (CValue == 'i') || (CValue == 'o') || (CValue == 'u') ||
        (CValue == 'A') || (CValue == 'E') || (CValue == 'I') || (CValue == 'O') || (CValue == 'U'))
    {
        return TRUE; 
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}

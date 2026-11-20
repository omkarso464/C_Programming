/**************************************************
 *
 * Function Name : CountWhite
 * Description   : This function counts the number of white spaces in a string.
 * Input         : A string
 * Output        : The count of white spaces in the string
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
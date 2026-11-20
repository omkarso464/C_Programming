/**************************************************
 *
 * Function Name : Difference
 * Description   : This function calculates the difference between the number of lowercase and uppercase letters in a given string.
 * Input         : A string
 * Output        : The difference between the count of lowercase and uppercase letters in the string
 * Author        : Omkar Santosh Sonawane
 * Date          : 20/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCnt--;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
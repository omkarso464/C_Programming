/**************************************************
 *
 * Function Name : ChkZero
 * Description   : This function checks whether the given number contains the digit zero or not.
 * Input         : Integer number
 * Output        : Returns TRUE if the number contains zero, otherwise returns FALSE
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}
/**************************************************
 *
 * Function Name : MultFact
 * Description   : This function takes an integer number as input and returns the product of all its factors.
 * Input         : Integer number
 * Output        : Returns the product of all factors of the number
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

int MultFact(int iNo)
{
    int iCntr = 0;
    int iMult = 1;

    for(iCntr = 1; iCntr < iNo; iCntr++)
    {
        if(iNo % iCntr == 0)
        {
            iMult = iMult * iCntr;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
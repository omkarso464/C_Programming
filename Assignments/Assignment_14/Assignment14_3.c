/**************************************************
 *
 * Function Name : NonFact
 * Description   : This function takes an integer number as input and prints all the non-factors of the number.
 * Input         : Integer number
 * Output        : Prints all the non-factors of the number
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}
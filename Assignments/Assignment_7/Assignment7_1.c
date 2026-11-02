/**************************************************
 *
 * Function Name : Pattern
 * Description   : Prints a pattern of "$ *" based on the input number
 * Input         : Integer value (iNo)
 * Output        : The pattern printed on the console
 * Author        : Omkar Santosh Sonawane
 * Date          : 1/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>


void Pattern (int iNo)
{
    int iCntr = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCntr = 1; iCntr <= iNo; iCntr++)
    {
        printf("$\t*\t");
    }
    printf("\n");


}
int main()
{
    int iValue = 0;


    printf("Enter Number: ");
    scanf("%d", &iValue);


    Pattern(iValue);

    return EXIT_SUCCESS;
}
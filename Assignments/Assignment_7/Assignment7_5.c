/**************************************************
 *
 * Function Name : MultipleDisplay
 * Description   : Displays the first 5 multiples of the input number
 * Input         : Integer value (iNo)
 * Output        : The multiples printed on the console
 * Author        : Omkar Santosh Sonawane
 * Date          : 1/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>


void MultipleDisplay(int iNo)
{
    int iCntr = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCntr = 1; iCntr <= 5; iCntr++)
    {
        printf("%d\t", iCntr * iNo);
    }
    printf("\n");


}
int main()
{
    int iValue = 0;


    printf("Enter Number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}
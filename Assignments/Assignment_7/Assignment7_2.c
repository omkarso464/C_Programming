/**************************************************
 *
 * Function Name : Display
 * Description   : Displays a sequence of numbers from 1 to the input number
 * Input         : Integer value (iNo)
 * Output        : The sequence of numbers printed on the console
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>



void Display (int iNo)
{
    int iCntr = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCntr = 1; iCntr <= iNo; iCntr++)
    {
        printf("%d\t", iCntr);
    }
    printf("\n");


}
int main()
{
    int iValue = 0;


    printf("Enter Number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
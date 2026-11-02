/**************************************************
 *
 * Function Name : OddValue
 * Description   : Displays odd numbers from 1 to the input number
 * Input         : Integer value (iNo)
 * Output        : The odd numbers printed on the console
 * Author        : Omkar Santosh Sonawane
 * Date          : 1/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>


void OddValue(int iNo)
{
    int iCntr = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCntr = 1; iCntr <= iNo; iCntr++)
    {
        if(iCntr % 2 != 0)
        {
            printf("%d\t", iCntr);
        }
    }
    printf("\n");


}
int main()
{
    int iValue = 0;


    printf("Enter Number: ");
    scanf("%d", &iValue);


    OddValue(iValue);

    return EXIT_SUCCESS;
}
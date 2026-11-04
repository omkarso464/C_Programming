/**************************************************
 *
 * Function Name : Percentage
 * Description   : This function calculates the percentage of obtained marks out of total marks.
 * Input         : Two integer numbers (total marks and obtained marks)
 * Output        : Returns the percentage as a float
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fPer = 0.0;

    if(iNo1 == 0)
    {
        return EXIT_FAILURE;
    }

    fPer = ((float)iNo2 / iNo1) * 100;

    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is %.2f%%", fRet);

    return EXIT_SUCCESS;
}
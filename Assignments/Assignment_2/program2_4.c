/**************************************************
 *
 * Function Name : Display
 * Description   : Displays the input number based on the frequency provided
 * Input         : Integer value and frequency
 * Output        : The input number repeated a specified number of times
 * Author        : Omkar Santosh Sonawane 
 * Date          : 21/10/2026
 *
 **************************************************/

#include<stdio.h>

void Display( int iNo, int iFrequency)
{
    int iCnt = 0;

    // Write Updater

    for(iCnt = 1 ; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d" , iNo );
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d" , &iValue );

    printf("Enter frequency");
    scanf("%d" , &iCount );

    Display(iValue, iCount);

    return 0;
}

/**************************************************
 *
 * Function Name : Accept
 * Description   : Accepts a number and prints that many asterisks
 * Input         : Integer value
 * Output        : "*"
 * Author        : Omkar Santosh Sonawane 
 * Date          : 20/10/2026
 *
 **************************************************/

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("*");
    }

}

int main()
{
    int iValue = 0;
    
    
    printf("Enter number : ");
    scanf("%d", &iValue );

    Accept(iValue);
    return 0;
}

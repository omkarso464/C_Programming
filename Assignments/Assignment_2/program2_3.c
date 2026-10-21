/**************************************************
 *
 * Function Name : Display
 * Description   : Displays
 * Input         : Integer value
 * Output        : "*"
 * Author        : Omkar Santosh Sonawane 
 * Date          : 20/10/2026
 *
 **************************************************/  

#include<stdio.h>

void Display ( int iNo)
{
    if( iNo < 10 )
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }                                                                                                            
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

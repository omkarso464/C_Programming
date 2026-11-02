/**************************************************
 *
 * Function Name : CircleArea
 * Description   : Calculates the area of a circle
 * Input         : Float value (fRadius)
 * Output        : The area of the circle
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14f;
    float fArea = 0.0f;

    fArea = fPI * fRadius * fRadius;

    return fArea;
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0f;

    printf("Enter radius : ");
    scanf("%f", &fValue);
    
    fRet = CircleArea(fValue);

    printf("Area of circle is %f\n", fRet);

    return 0;
}
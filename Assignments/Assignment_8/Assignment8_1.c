/**************************************************
 *
 * Function Name : Number
 * Description   : Categorizes the input number as Small, Medium, or Large
 * Input         : Integer value (iNo)
 * Output        : The category of the number printed on the console
 * Author        : Omkar Santosh Sonawane
 * Date          : 2/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if (iNo >=50 && iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;


    printf("Enter Number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}
#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if (iValue < 0)
    {
        printf("The number is negative.\n");
    }
    else if (iValue > 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
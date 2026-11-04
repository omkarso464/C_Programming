#include <stdio.h>
#include <stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCntr = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
    }
    else
    {
        for(iCntr = iStart; iCntr <= iEnd; iCntr++)
        {
            if(iCntr % 2 == 0)
            {
                printf("%d ", iCntr);
            }
        
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}




/**************************************************
 *
 * Function Name : SumNonFact
 * Description   : This function takes an integer number as input and returns the sum of all its non-factors.
 * Input         : Integer number
 * Output        : Returns the sum of all non-factors of the number
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
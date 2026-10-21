
/**************************************************
 *
 * Function Name : Divide
 * Description   : Divides two numbers and returns the result
 * Input         : Two integers (iNo1, iNo2)
 * Output        : Integer value
 * Author        : Omkar Santosh Sonawane 
 * Date          : 20/10/2026
 *
 **************************************************/

 #include <stdio.h>

 int Divide(int iNo1, int iNo2)
 {
    int iAns = 0;

    if (iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
 }


 int main()
 {
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is : %d", iRet);

    return 0;
 }

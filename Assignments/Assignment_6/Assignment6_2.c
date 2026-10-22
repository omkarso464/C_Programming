/**************************************************
 *
 * Function Name : CheckAdmission
 * Description   : Checks if a student is eligible for admission
 * Input         : Float value (marks) and integer value (age)
 * Output        : Whether the student is eligible for admission
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>


void CheckAdmission(float fMarks, int iAge)
{
    if (fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
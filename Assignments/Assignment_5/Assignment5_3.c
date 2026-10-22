#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if (fMarks >= 90.0f)
    {
        printf("Grade: A\n");
    }
    else if (fMarks >= 75.0f)
    {
        printf("Grade: B\n");
    }
    else if (fMarks >= 60.0f)
    {
        printf("Grade: C\n");
    }
    else if (fMarks >= 40.0f)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}
/**************************************************
 *
 * Function Name : CheckVotingEligibility
 * Description   : Checks if a person is eligible for voting
 * Input         : Integer value (age)
 * Output        : Whether the person is eligible for voting
 * Author        : Omkar Santosh Sonawane
 * Date          : 22/10/2026
 *
 **************************************************/

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for Voting.\n");
    }
    else
    {
        printf("Not Eligible for Voting.\n");
    }

}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
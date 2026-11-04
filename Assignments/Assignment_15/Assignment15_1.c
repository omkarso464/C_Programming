/**************************************************
 *
 * Function Name : Main
 * Description   : This function takes the full name of the user as input and displays it on the screen.
 * Input         : Full name of the user
 * Output        : Displays the full name on the screen
 * Author        : Omkar Santosh Sonawane
 * Date          : 4/11/2026
 *
 **************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf("%[^'\n']", Name);

    printf("Your name is %s \n", Name);

    return EXIT_SUCCESS;
}
/**************************************************
 *
 * Function Name : Display
 * Description   : Displays numbers from 5 to 1
 * Input         : None
 * Output        : None
 * Author        : Omkar Santosh Sonawane 
 * Date          : 20/10/2026
 *
 **************************************************/

 #include<stdio.h>

void Display()
{
    int i = 0;

    i = 5;
    while( i >= 1)  
    {
        printf("%d \n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("The 1st number you specify will be the one\n");
    printf("that gets divided by, multiplied by, added to or subtracted from the 2nd.\n");


    float num1 = get_long("Number: ");
    float num2 = get_long("Number: ");

    printf("Note that you may only use '/' '*' '+' '-'. Everything else will make the program quit.\n");
    char op = get_char("What would you like to do?\n");

    if(op == '/')
    {
        float val = num1 / num2;
        printf("%.2f\n", val);
    }
    else if(op == '*')
    {
        long value = num1 * num2;
        printf("%li\n", value);
    }
    else if(op == '+')
    {
        long value = num1 + num2;
        printf("%li\n", value);
    }
    else if(op == '-')
    {
        long value = num1 - num2;
        printf("%li\n", value);
    }
    else
    {
        printf("Sorry, that is not possible\n");
        return 0;
    }

}
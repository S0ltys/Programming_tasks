#include <stdio.h>

int main(void)
{
    int digit, first_digit, middle_digit, last_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &digit);

    first_digit = digit / 100;
    middle_digit = digit / 10 % 10;
    last_digit = digit % 10;

    printf("The reversal is: %d%d%d", last_digit, middle_digit, first_digit );

    return 0;
}
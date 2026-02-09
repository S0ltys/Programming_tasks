#include <stdio.h>

int main(void)
{
    int digit, FIRST_digit, SECOND_digit;


    printf("Entern  a two-digit number: ");
    scanf("%d", &digit);


    FIRST_digit = digit % 10; // 8
    SECOND_digit = digit / 10; // 2
    
    printf("The reversal is: %d%d", FIRST_digit, SECOND_digit);

    return 0;
}
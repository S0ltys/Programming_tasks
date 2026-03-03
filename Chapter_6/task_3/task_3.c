#include <stdio.h>

int main(void) 
{
    int a, b, gcd, numerator, denominator;   



    printf("Enter the fraction: ");
    scanf("%d/%d", &numerator , &denominator);

    a = numerator;
    b = denominator;

    while ( denominator != 0 ) {
        gcd = numerator % denominator;
        numerator = denominator;
        denominator = gcd;

    }
        printf("In lowest terms: %d/%d", a/numerator, b/numerator);
    
    return 0;
}
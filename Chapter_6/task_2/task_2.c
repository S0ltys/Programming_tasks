#include <stdio.h>

int main(void) 
{

    int n , m, remainder;

    // let m and n be two positive integers
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    // This is algorithm of Euclid to find the greatest common divisor of two integers

    // check if n is 0, if yes progrma stop and return m as the greatest common divisor, if not continue with the algorithm  
    while ( n!= 0 ) { 
        remainder = m % n; // compute the remainder of m divided by n
        m = n; // coppy n to m
        n = remainder;   // coppy the remainder to n
    }

    printf("Greatest common divisor: %d", m);

    return 0;
}
#include <stdio.h>

int main(void) 
{
    int digits = 0, n;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do {
        n /= 10; // calculate the number of digits by dividing n by 10 until n becomes 0 
        digits++;        
    } while (n > 0);

    printf("The numebr has %d digits(s). \n", digits);

    return 0;
}
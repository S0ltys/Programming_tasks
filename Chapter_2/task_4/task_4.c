#include <stdio.h>

int main(void)
{
    float amount, tax;

    printf("\nEntern a dollar-and-cents amount: ");
    
    scanf("%f", &amount);


    tax = amount * 0.05;

    printf("With tax added: $%.2f", amount + tax );


    return 0;
}
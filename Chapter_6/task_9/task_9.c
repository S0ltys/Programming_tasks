#include <stdio.h>

int main(void)
{

    float payment, loan, rate;
    int number;

    printf("\nEntern amount of loan: ");
    scanf("%f", &loan);

    printf("\nEntern interest rate: ");
    scanf("%f", &rate);

    rate = rate / 100.0 / 12 ;

    printf("\nEntern monthly payment: ");
    scanf("%f", &payment);

    printf("Entern the number of payment: ");
    scanf("%d", &number);

 for (int i = 0; i < number; i++) 
    {
        loan = loan - payment + loan * rate;
        printf("Balance remaining after payment  %.2f\n", loan);
    }


    return 0;
}
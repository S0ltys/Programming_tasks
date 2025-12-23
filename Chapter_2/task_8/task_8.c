#include <stdio.h>

int main(void) {

    float loan, rate, payment, month_rate;

    printf("\nEntern amount of loan: ");
    scanf("%f", &loan);

    printf("\nEntern interest rate: ");
    scanf("%f",&rate);

    rate = rate / 100.0 / 12 ;


    printf("\nEntern monthly payment: ");
    scanf("%f", &payment);


    // loan -= payment;
    //month_rate *= loan;

    loan = loan - payment + loan * rate;

   /* month_rate = interest_rate * 100.0 / 12.0;

        loan = loan - payment + loan * month_rate; */


    printf("\nBalance remaining after first paymentL %.2f\n", loan);

    loan = loan - payment + loan * rate;

    printf("Balance remaining after second payment: %.2f\n", loan);

    loan = loan - payment + loan * rate;

    printf("Balance remaining after third payment: %.2f\n", loan );

    return 0;
}

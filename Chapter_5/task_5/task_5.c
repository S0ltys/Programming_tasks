#include <stdio.h>

int main(void)
{
    float income, amount_of_tax, tax_due;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 750)
    {
        amount_of_tax = income * 0.01;

    } else if (income >= 750 && income <= 2250 ) 
    {
        amount_of_tax = 7.50 + 0.02 * (income - 750);

    } else if(income >= 2.250 && income <= 3750 )
    {
        amount_of_tax = 37.50 + 0.03 * (income - 2250);
    
    } else if (income >= 3.750 && income <= 5.250)
    {
        amount_of_tax = 82.50 + 0.04 * (income - 3750);

    } else if (income >= 5.250 && income <= 7000) 
    {
        amount_of_tax = 142.50 + 0.05 * (income - 5250);

    } else if (income > 7000) 
    {
        amount_of_tax = 230.00 + 0.06 * (income - 7000);
    }


    printf("Tax due is : $%.2f:",  amount_of_tax);
    

    return 0;
}
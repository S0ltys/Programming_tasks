#include <stdio.h>

int main(void)
{
    float commission, rival_commission, number_share, per_share , value;

    printf("Enter number the share  of trade: ");
    scanf("%f", &number_share);

    printf("Enter the price per share: ");
    scanf("%f", &per_share);
    
    value = number_share * per_share;

    // calculate commission
    if(value < 2500.00f) {
        commission = 30.00f + .017f * value;
    } else if(value < 6250.00f) {
        commission = 56.00f + 0.0066f * value;
    } else if(value < 20000.00f) {
        commission = 76.00f + 0.0034f * value;
    } else if(value < 50000.00f) {
        commission = 126.58f + .0022f * value;
    } else if(value < 50000.99f) {
        commission = 154.88f + .0011f * value;
    } else {
        commission = 254.88f + .0009f * value;
    }

    // original commision
    if(commission < 39.00f) {
        commission = 39.00f;
    }

    // rival broker
    if (number_share < 2000) {
        rival_commission = 33.00f + 0.03 * number_share;

     } else if ( number_share >= 2000)
    {
        rival_commission = 33.00f + 0.02 * number_share;
    } 
    
    
    printf("Value: $%2.02f\n", value);
    printf("Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", rival_commission);

    return 0;
}
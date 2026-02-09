#include <stdio.h>

int main(void)
{

   int digit, digit2 , digit3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &digit, &digit2 , &digit3);

    printf("The reversal is: %d%d%d", digit3, digit2, digit );

    return 0;
}
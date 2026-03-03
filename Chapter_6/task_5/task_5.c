#include <stdio.h>

int main(void) 
{
    int digit;

        printf("Enter a number: ");
        scanf("%d", &digit);

    do 
    {
       printf("%d\n", digit % 10); // remove the first digit by calculating the remainder of the number when divided by 10
       digit /= 10; //  remove the last digit by dividing the number by 10
        
    }
    while ( digit > 0);

    return 0;
}
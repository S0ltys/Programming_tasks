#include <stdio.h>

int main(void) 
{

    int d, i1, i2, i3 ,i4 ,i5 , j1 ,j2 ,j3 ,j4 , j5, j6, first_sum, second_sum, total, calculate_digits;

    printf("Enter the first 12 digits of an UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3 ,&i4 ,&i5 , &j1 ,&j2 ,&j3 ,&j4 , &j5, &j6);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    calculate_digits = (10 - (total % 10)) % 10;


    if (calculate_digits == j6)
    {
        printf("Valid\n");
        printf("Check digit: %d\n ", calculate_digits);  
    } 
    else 
    {
        printf("Not Valid\n");
        printf("Check digit: %d\n ", calculate_digits);
    }

    return 0;
}


// it was one of the most difficult task.

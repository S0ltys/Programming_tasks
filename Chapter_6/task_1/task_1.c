#include <stdio.h>

int main(void)
{

    float n, largest, smallest;

    printf("Enter a number: ");

    scanf("%f", &n);
    largest = n;
    smallest = n;

    while (n > 0)
{
     if (n > largest) {
        largest = n;
     }

     if (n < smallest) {
        smallest = n;     
    }
       printf("Enter a number: ");
       scanf("%f", &n);
}
        printf("The largest number was %g\n", largest); 
        printf("The smallest number was %g", smallest); 

    return 0;

}
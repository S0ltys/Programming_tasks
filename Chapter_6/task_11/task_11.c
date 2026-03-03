#include <stdio.h>

int main(void) 
{
   //    e = 1 + 1/1! + 1/!2 + 1/!3 + ... + 1/n!

    int try, i ;
    float fact = 1 , sum = 1 ;

    printf("Enter the n: ");
    scanf("%d", &try);

    if (try < 0) 
    {
        printf("Error! Factorial of a negative number doesn't exist. \n");
    } else {
        for (i = 1; i <= try; ++i) 
        {
            fact *= i;

            sum += 1/fact;
        }
        printf("Factorial of %d = %f",try , sum);
    }

    return 0;
}
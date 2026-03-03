#include <stdio.h>

int main(void)
{
    int i = 1;
    float term = 1.0, sum = 1, fact = 1, epsilon;

    printf("Enter the epsilon: ");
    scanf("%f", &epsilon);

    while (term >= epsilon) 
    {
        fact *= i;
        term = 1/fact;
        sum += 1/fact;
        i++;
    }
    printf("e = %f", sum);

    return 0;
}
#include <stdio.h>

int main(void) 
{

    int number;     

    printf("Enter a number: ");
    scanf("%d", &number);

    if (0 <= number && number <= 9) 
    {
        printf("The number %d has 1 digits", number);
    } else if (10 <= number && number <= 99)
    {
        printf("The number %d has 2 digits", number);
    } else 
    {
        printf("The number %d has 3 digits", number );
    }
    
    return 0;
}


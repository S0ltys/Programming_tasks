#include <stdio.h>

int main(void)
{

int age, teenager;

    printf("Enter your age: ");
    scanf("%d", &age);

    teenager = (age >= 13 && age <= 19 );

    printf("%d", teenager);

    return 0; 
}
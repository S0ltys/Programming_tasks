#include <stdio.h>

int main(void) 
{

    int number, dig_a , dig_b; 

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &dig_a, &dig_b);
    
    number = dig_a * 10 + dig_b; // 1 * 10 + 5 

    if (number == 11){
        printf("You entered the number eleven.");
        
    } else if (number == 12) {
        printf("You entered the number twelve.");

    } else if (number == 13) {
        printf("You entered the number thirteen.");

    } else if (number == 14) {
        printf("You entered the number fourteen.");

    } else if (number == 15) {
        printf("You entered the number fifteen.");

    } else if (number == 16) {
        printf("You entered the number sixteen.");

    } else if (number == 17) {
        printf("You entered the number seventeen.");

    } else if (number == 18) {
        printf("You entered the number eighteen.");

    } else if (number == 19) {
        printf("You entered the number nineteen.");
    
    } else {
        
    switch (dig_a) {
        case 1: printf("You enterned the number ten"); break;
        case 2: printf("You enterned the number twenty"); break;
        case 3: printf("You enterned the number thirty"); break;
        case 4: printf("You enterned the number forty"); break;
        case 5: printf("You enterned the number fifty"); break;
        case 6: printf("You enterned the number sixty"); break;
        case 7: printf("You enterned the number seventy"); break;
        case 8: printf("You enterned the number eighty"); break;
        case 9: printf("You enterned the number ninety"); break;        
        
    }

    switch (dig_b) {
        case 1: printf("-one.");   break;
        case 2: printf("-two");   break;
        case 3: printf("-three");  break;
        case 4: printf("-four"); break;
        case 5: printf("-five");  break;
        case 6: printf("-six");   break;
        case 7: printf("-seven"); break;
        case 8: printf("-eight"); break;
        case 9: printf("-nine");  break;

    }
} 

    return 0;
}
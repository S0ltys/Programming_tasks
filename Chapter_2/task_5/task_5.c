#include <stdio.h>

int main(void) 
{

    int x;
    
    
    printf("Entern the X: ");
    scanf("%d", &x);
    
    int x2 = x * x; // x * x;
    int x3 = x2 * x; // x * x * x;
    int x4 = x3 * x; // x * x * x * x;
    int x5 = x4 * x ; // x * x * x * x * x;


    printf("Your calculation are: %d",3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x - 6);

    return 0;


}
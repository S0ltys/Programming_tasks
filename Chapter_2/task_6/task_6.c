#include <stdio.h>

int main(void) 
{
    // ((((3x + 2)x - 5)x - 1)x + 7)x - 6

    int x;
    
    printf("Entern the X: ");
    scanf("%d", &x);
    
    printf("Your calculation are: %d",((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;

}
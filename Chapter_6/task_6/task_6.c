#include <stdio.h>

int main(void)
{

    int i, n, square;

    printf("Enter a number n: ");
    scanf("%d", &n);

    
    for (int i = 2; i * i <= n; i += 2)  
    {
        if (i % 2)
            continue;
        
            square = i * i; // square 2 * 2
        printf("%d\n", square);
    }
 

    return 0;
}
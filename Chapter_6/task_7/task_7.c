#include <stdio.h>

int main(void)
{
    int n, i, odd , square;

        printf("This program prints a table of squares. \n");
        printf("Enter number of entries in table: ");
        scanf("%d", &n);

        for (odd =3 , i = 1, square = 1; i <= n; odd += 2, ++i) 
        {
            printf("%10d%10d\n", i ,square);
            square += odd;
        }
        
        return 0;
}
        

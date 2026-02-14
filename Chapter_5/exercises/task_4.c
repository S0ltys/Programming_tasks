#include <stdio.h>

int main(void)
{

    int j , i ;

    printf("Enter value of i: ");
    scanf("%d", &i);

    j = (i > 0) - (i < 0);

    printf("%d", j);

    return 0;


 
}
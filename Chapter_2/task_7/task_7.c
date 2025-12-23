#include <stdio.h>

int main(void)
{
    int dollar;

    printf("Entern the dollar amount: ");
    scanf("%d", &dollar);


    printf("$100 bills: %d\n", dollar / 100);
    dollar %= 100;

    printf("$50 bills: %d\n", dollar / 50);
    dollar %= 50;

    printf("$20 bills: %d\n", dollar / 20);
    dollar %= 20;

    printf("$10 bills: %d\n", dollar / 10);
    dollar %= 10;

    printf("$5 bills: %d\n", dollar / 5);
    dollar %= 5;

    printf("$1 bills: %d", dollar / 1);
    

    return 0;

}
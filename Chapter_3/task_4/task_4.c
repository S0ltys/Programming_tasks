#include <stdio.h>

int main(void)
{

    int x, y, z;


    printf("Entern phone numebr [ (xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &x, &y, &z);

    printf("You enterned %d.%d.%d ", x, y, z);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int r;
    float pi = 3.14;
    
    printf("Entern the radius of sphere:");
    
    scanf("%d", &r);
    
    
    
    float v = (4.0/3.0 * pi * (r * r * r));                
    
    printf("The volume of a sphere : %f\n", v);
    
    return 0;

}
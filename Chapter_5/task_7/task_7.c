#include <stdio.h>

int main(void) 
{
    int a, b, c, d, largest, smallest;

    
    
    printf("Enter four integers:");
    scanf("%d %d %d %d", &a , &b, &c, &d);
    
    largest = a;
    smallest = a;

    if (largest < b)
        largest = b;
   
    if (largest < c)
        largest = c;

    if (largest < d)
        largest = d;

    if (smallest > b )
        smallest = b;

    if (smallest > c )
        smallest = c;

    if (smallest > d )
        smallest = d;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
        
            // // calculate the largest integer 
            
            // if (a > b && a > c && a > d )
            // {
            //     printf("Largest: %d (a)", a);
        
            // //        printf ("Smallest %d", a );
        
            // } else if(b > a && b > c && b > d )
            // {
            //     printf("Largest: %d (b)", b);
        
            // } else if (c > a && c > b && c > d )
            // {
            //     printf("Largest: %d (c)", c);
        
            // } else if (d > a && d > b && d > c )
            // {
            //     printf("Largest: %d (d)", d);
        
            // }
        
    return 0;
}
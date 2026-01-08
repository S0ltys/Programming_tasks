#include <stdio.h>

int main(void)
 
{

    int item, m,d,y;

    float price;


    printf("Entern item number: ");
    scanf("%d", &item );
    
    printf("Entern unit price: ");
    scanf("%f", &price  );
    
    printf("Entern purchase  date (mm/dd/yyyy);");
    scanf("%d/%d/%d", &m, &d, &y);

   // printf("Item\t%dUnit\n\tPrice%.2fPurchase\tDate%d/%02d/%d", item, price , m , d ,y);
    
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d \t$%5.2f \t%d/%02d/%d\n", item, price, m ,d, y);
    

    return 0;

}
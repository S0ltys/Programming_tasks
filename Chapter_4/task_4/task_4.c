#include <stdio.h>

int main(void) 
{
    int num, num1, num2, num3, num4, num5;


    printf("Entern a number between 0 and 32767: ");
    scanf("%d", &num);
    
    num5 = num % 8;
    num1 = num / 8;
    num2 = num1 / 8;
    num3 = num2 / 8;
    num4 = num3 / 8;

 
        printf("%d", num4 % 8); // leftmost digit
        
        
        printf("%d", num3 % 8);
        
    
        printf("%d", num2 % 8); // midle digit
        
 
        printf("%d", num1 % 8);
        
        
        printf("%d", num5); // rightmost digit

    //46301
    
    //03641
    
    
    // printf("In octal, your number is: %d%d",  num1, num2);



    return 0;
}
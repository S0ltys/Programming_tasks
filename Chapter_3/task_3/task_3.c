#include <stdio.h>

int main(void)
{
    int prefix, indentifier, code, item_number, check_dig;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &indentifier, &code, &item_number, &check_dig);


    printf("GSI prefix: %d\n", prefix);
   
    printf("Group indetifier: %d\n", indentifier);
    
    printf("Publisher number: %d\n", code);
    
    printf("Item number: %d\n", item_number);
    
    printf("Check digit: %d", check_dig );
    
    return 0;
}
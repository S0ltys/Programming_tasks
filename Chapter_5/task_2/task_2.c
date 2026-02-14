#include <stdio.h>

int main(void) 
{
    int hour, minutes;


    printf("Enter a 24-hours time: ");
    scanf("%d:%d", &hour , &minutes);

    if(1 <= hour && hour <= 11) {
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, minutes);

    } else if(hour == 0) {
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour + 12, minutes);
    
    } else if (13 <= hour && hour <= 23) {
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour - 12, minutes);
    
    } else if(hour == 12) { 
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minutes);
    }
 


    return 0;
}
#include <stdio.h>

int main(void) 
{
    int mon1, day1, year1, mon2, day2, year2;


    printf("Entern first date: (mm//dd//yy): ");
    scanf("%d/%d/%d", &mon1, &day1, &year1);

    printf("Entern second date: (mm//dd//yy): ");
    scanf("%d/%d/%d", &mon2, &day2, &year2);


    if (year1 < year2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon1, day1, year1, mon2, day2, year2);

    } else if (year2 < year1) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon2, day2, year2, mon1, day1, year1);
    
    } else {
    
    if (mon1 < mon2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon1, day1, year1, mon2, day2, year2);

    } else if (mon2 < mon1) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon2, day2, year2, mon1, day1, year1);
    
    } else {

    if (day1 < day2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon1, day1, year1, mon2, day2, year2);

    } else if (day2 < day1) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d", mon2, day2, year2, mon1, day1, year1);

    } else {
      printf("Dates are equal %02d/%02d/%02d and %02d/%02d/%02d are the same",  mon1, day1, year1, mon2, day2, year2);
      
      }
    }
  }
    return 0;
}
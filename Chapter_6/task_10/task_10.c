#include <stdio.h>

int main(void) 
{

    int mon, day, year, earliest_mon, earliest_day, earliest_year ;

      printf("Enter the date (mm//dd//yy): ");
      scanf("%d/%d/%d", &mon, &day, &year);

    earliest_year = year;
    earliest_mon = mon;
    earliest_day = day;

    do 
    {
          printf("Enter the date (mm//dd//yy): ");
          scanf("%d/%d/%d", &mon, &day, &year);

        if (year < earliest_year) {
            earliest_year = year;
            earliest_mon = mon;
            earliest_day = day;
        } else if (year == earliest_year && mon < earliest_mon) {
             earliest_mon = mon;
             earliest_day = day;
             earliest_year = year;
        } else if (year == earliest_year && mon == earliest_mon && day < earliest_day) {
                earliest_mon = mon;
                earliest_day = day;
                earliest_year = year;
        } 

          // if (year < earliest_year ){
        //             earliest_year = year;
        //             earliest_mon = mon;
        //             earliest_day = day;
        // } else if (mon < earliest_mon) {
        //             earliest_mon = mon;
        //             earliest_day = day;  
        //             earliest_year = year;
        // } else if (day < earliest_day) {
        //             earliest_day = day;
        //             earliest_mon = mon;
        //             earliest_year = year;
        // }

    }
    while (mon != 0 || day != 0 || year != 0);
    printf("%d/%d/%d is the earliest date ", earliest_mon, earliest_day, earliest_year);

    return 0;
}
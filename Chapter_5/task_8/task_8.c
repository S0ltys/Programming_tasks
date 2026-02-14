#include <stdio.h>

int main(void)
{

    int hour, minutes, time, departure_time, departure_time_2, departure_time_3, departure_time_4, departure_time_5, departure_time_6, departure_time_7, departure_time_8;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    time = hour * 60 + minutes;

    departure_time = 8 * 60 ; // 480 
    departure_time_2 = 9 * 60 + 43; // 583
    departure_time_3 = 11 * 60 + 19; // 679
    departure_time_4 = 12 * 60 + 47; // 767 
    departure_time_5 = 14 * 60 ; // 840
    departure_time_6 = 15 * 60 + 45; // 945
    departure_time_7 = 19 * 60; // 1140
    departure_time_8 = 21 * 60 + 45; // 1305

    if (time < (480 + 583) / 2) {
    
        printf("Closest departure time is 8:00 a.m. , arriving time at 10:16 a.m.");
        // 8:00 найближчий
    
    } else if (time < (583 + 679) / 2 ) {
    
        printf("Closest departure time is 9:43 a.m. , arriving time at 11:52 a.m.");
        // 9:43 найближчий 
    
    } else if (time < (679 + 767) / 2 ) {

        printf("Closest departure time is 11:19 a.m. , arriving time at 1:31 p.m.");
        // 11:19 

    }  else if (time < (767 + 840) / 2 ) {

        printf("Closest departure time is 12:47 p.m. , arriving time at 3:00 p.m.");
        // 12:47 

    } else if (time < (840 + 945) / 2 ) {

        printf("Closest departure time is 2:00 p.m. , arriving time at 4:08 p.m.");
        // 2:00 p.m.

    } else if (time < (945 + 1140) / 2 )
    {

        printf("Closest departure time is 3:45 p.m. , arriving time at 5:55 p.m.");
        // 3:45 p.m.

    } else if (time < (1140 + 1305 ) / 2) {

        printf("Closest departure time is 7:00 p.m. , arriving time at 9:20 p.m.");
        // 7:00 p.m.

    } else {

        printf("Closest departure time is 9:45 p.m. , arriving time at 11:58 p.m.");
        // 9:45 p.m.

    }

    // 


    // if (time - departure_time  < time - departure_time_2 ) 
    // {
    //     printf("Closest departure time is 8:00 a.m. , arriving time at 10:16 a.m.");

    // } else if (time - departure_time_2 < time - departure_time_3 )
    // {
    //     printf("Closest departure time is 9:43 a.m. , arriving time at 11:52 a.m.");


    // }

    // if (time - departure_time < departure_time)
    // {
    //     printf("Closest departure time is 8:00 a.m. , arriving time at 10:16 a.m.");

    // } else if (time - departure_time)
    // {

    //     printf("Closest departure time is 9:43 a.m. , arriving time at 11:52 a.m.");
    // }


    // if (1 <= hour && hour <= 11)
    // {
    

    // } else if (0)
    // {


    // } else if (0)

    // printf("Closest departure time is 8:00 a.m. , arriving time at 10:16 a.m.");


    return 0;
}
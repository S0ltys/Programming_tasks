#include <stdio.h>

int main(void)
{

int days_in_month; 
int starting_day;   
int day_of_week;    

    printf("Enter number of days in month: ");

    printf("Enter starting day of the week (1=Sun, 7=Saturday): ");
   
scanf("%d", &days_in_month);
scanf("%d", &starting_day);

for (int i = 1; i < starting_day; i++) {
    printf("   ");  
}

day_of_week = starting_day;

for (int day = 1; day <= days_in_month; day++) {
    printf("%3d", day);  
    
    if (day_of_week == 7) {  // якщо субота - новий рядок
        printf("\n");
        day_of_week = 1;  // reset до неділі
    } else {
        day_of_week++;  // наступний день тижня
    }
}

   return 0;
}
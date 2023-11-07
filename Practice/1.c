#include<stdio.h>

int main()
{

  int month;
  int day;
  int year;
  int earliestDay = 0;
  int earliestMonth = 0;
  int earliestYear=0;


 printf("Enter a date (mm/dd/yy): ");
 scanf("%d/%d/%d", &month, &day, &year);

while (day && month && year !=0){

   printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    if ( earliestDay <= day)
        earliestDay = day;

    if (earliestMonth <= month)
        earliestMonth = month;

    if (earliestYear <= year)
    earliestYear = year;

}
printf("\nHighest date : %d/%d/%d \n", earliestMonth, earliestDay, earliestYear);

}

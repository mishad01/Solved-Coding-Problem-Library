#include<stdio.h>
struct personal
{
char name [20];
int day;
char month[10];
int year;
float salary;
};
main ()
{
struct personal person;
printf ("Input Values (Separated by space)\n");
printf ("Name of Person, Date of Joining (Day Month Year ), Salary of the Person\n");
scanf ("%s %d %s %d %f", person.name, &person.day, person.month, &person.year,
&person.salary);
printf ("\nName of Person : %s \nDate of Joining : %d %s %d \nSalary of the Person :%f\n", person.name, person.day, person.month, person.year, person.salary); }

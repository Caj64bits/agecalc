#include <stdio.h>
#include <time.h>

int main(void) {
  int year_of_birth;
  int month_of_birth;
  int day_of_birth;

  printf("Enter year of birth: ");
  scanf("%d", &year_of_birth);

  printf("Enter month of birth: ");
  scanf("%d", &month_of_birth);

  printf("Enter day of birth: ");
  scanf("%d", &day_of_birth);

  time_t now = time(NULL); // raw seconds since 1970
  struct tm *t = localtime(&now);
  int current_year = t->tm_year + 1900;
  int current_month = t->tm_mon + 1;
  int current_day = t->tm_mday;

  int age_y = current_year - year_of_birth;

  printf("You are %d years old\n", age_y);
  return 0;
}

#include <stdio.h>
#include <time.h>

int is_leap(int y) { return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0; }

int main(void) {
  int year_of_birth;
  int month_of_birth;

  char *year_string = "years";
  char *month_string = "months";

  printf("Enter year of birth: ");
  scanf("%d", &year_of_birth);

  printf("Enter month of birth: ");
  scanf("%d", &month_of_birth);

  time_t now = time(NULL); // raw seconds since 1970
  struct tm *t = localtime(&now);
  int current_year = t->tm_year + 1900;
  int current_month = t->tm_mon + 1;

  int age_y = current_year - year_of_birth;
  int age_m = current_month - month_of_birth;

  int total_age_m = (age_y * 12) + age_m;
  int final_age_y = total_age_m / 12;
  int final_age_m = total_age_m % 12;

  if (final_age_y > 1) {
    year_string = "years";
  } else {
    year_string = "year";
  }

  if (final_age_m > 1) {
    month_string = "months";
  } else {
    month_string = "month";
  }

  printf("You are %d %s and %d %s old\n", final_age_y, year_string, final_age_m,
         month_string);
  return 0;
}

// TODO add option for days

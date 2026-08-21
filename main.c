#include <stdio.h>
#include <time.h>

int main(void) {
  int year_of_birth;

  printf("Enter year of birth: ");
  scanf("%d", &year_of_birth);

  time_t now = time(NULL); // raw seconds since 1970
  struct tm *t = localtime(&now);
  int current_year = t->tm_year + 1900;

  int age = current_year - year_of_birth;
  printf("You are %d years old\n", age);
  return 0;
}

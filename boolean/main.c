#include <stdio.h>
#include <stdbool.h> // bool

/*
  true - 1
  false - 0
  || - or
  && - and
  ! - not
*/

int main(void) {
    int digit;
    printf("Print a number to check is even or odd. ");
    scanf("%d", &digit);

    bool even = digit % 2 == 0;
    printf("%d\n", even);

    // range [3;7]

    double a;
    printf("Print a number to check is that number in range of [3; 7]");
    scanf("%lf", &a);

    bool is_range = a >= 3 && a <= 7;

    printf("%d\n", is_range);

    return 0;
}
#include <stdio.h>

/* Function printf and they attributes */

int main(void) {
    short a = 150; // %d
    char b = 127; // %d
    int c = 123321; // %d
    long double d = 87834097; // %Lf

    printf("Short - %d\nChar - %d\nInt - %d\nDouble - %Lf\n", a, b, c, d);

    int var_i = -12453;
    double var_d = 123.23;

    printf("[%10d]\n", var_i);
    printf("[%10f]\n", var_d);
    printf("[%#X]\n", var_i);

    return 0;
}

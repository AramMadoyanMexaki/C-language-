#include <stdio.h>

int main(void) {
    unsigned int price = 0;
    double weight = 0.0;

    int a = 0;
    int b = 0;

    int res = scanf("%*u; %u; %lf", &price, &weight); // Will be 3 variables but first one is ignored -> '%*'
    int res_2 = scanf("%d; %d", &a, &b); 

    printf("res = %d, price = %d, weight = %.2f\nThe first value is ignored\n", res, price, weight);
    printf("a = %d, b = %d", a, b);

    return 0;
}
#include <stdio.h>
#include <math.h> // Some mathematical functions

int main(void) {
    /*
    
    double a = 7.396, b = -1.43;
    double max_ab = a > b ? a : b;

    double res_abs = a < b ? fabs(a) : fabs(b); // modulus |a| or |b|

    */ 

    int x;
    scanf("%d", &x);

    printf("%d is %s digit\n", x, (x % 2 == 0) ? "even" : "odd");


    return 0;
}
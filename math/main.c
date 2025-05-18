#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double D, x1, x2;

    printf("Enter number for A, B, C value: \n");
    if(scanf("%lf %lf %lf", &a, &b, &c) < 3) {
        printf("Error input.");
        return 0;
    }
    
    D = b*b - 4 * a * c;

    if(D > 0) {
        x1 = -(b - sqrt(D)) / 2 * a;
        x2 = -(b + sqrt(D)) / 2 * a;

        printf("D =%.2lf, Root x1 =%.2lf, root x2 =%.2lf.\n", D, x1, x2);
    } else if(D == 0) {
        x1 = x2 = -(b / 2 * a);
        printf("D = 0, Root x1 =%.2lf, root x2 =%.2lf.\n", x1, x2);
    } else {
        printf("D =%.2lf, roots do not exist in the case of negative value of D.\n", D);
        return 0;
    }

    return 0;
}
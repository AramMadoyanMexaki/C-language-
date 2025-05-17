#include <stdio.h>

int main(void) {
    int x;
    if(scanf("%d", &x) != 1) { // Check true or false
        printf("Error input\n");

        return 0;
    };

    if(x < 0) {
        printf("x < 0\n");
    } else if(x <= 0) {
        printf("x <= 0\n");
    } else {
        printf("x >= 0\n");
    }

    return 0;
}
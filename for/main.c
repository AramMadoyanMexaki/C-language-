#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* factorial

int main(void) {
    long n, f;

    if(scanf("%ld", &n) != 1) {
        printf("Error input");
        return 0;
    }

    for(f = 1; n > 0; n--) {
        f *= n;
    }

    printf("%ld\n", f);

    return 0;
}
*/


// random numbers
int main(void) {
    srand(time(NULL));

    for(int x = rand() % 10; x != 0; x = rand() % 10) {
        printf("x = %d\n", x);
    }

    return 0;
}
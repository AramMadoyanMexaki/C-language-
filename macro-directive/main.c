#include <stdio.h>

#define FIVE 5
#define TEN 2 * FIVE
#define TEXT "Hello World"
#define TEXT2 "Hello \
world"
#define PRINT printf("digit = %d\n", digit)
#define FORMAT "digit = %d\n"


int main(void) {

    int digit = FIVE;
    PRINT;
    digit = TEN;

    printf(FORMAT, digit);
    printf(TEXT "\n");
    printf(TEXT2 "\n");

    return 0;
}
#include <stdio.h>

#define TOTAL_DIGITS    10

int main() {
    int digits[TOTAL_DIGITS] = {3, 2, 5, 4, 6, 7};
    int del_index = 2;

    for(int i = del_index; i < TOTAL_DIGITS-1; ++i) {
        digits[i] = digits[i+1];
        printf("digits[%d] = digits[%d]\n", i, i+1);
    }

    for(int i = 0; i < TOTAL_DIGITS; i++) {
        printf("%d ", digits[i]);
    }

    return 0;
}
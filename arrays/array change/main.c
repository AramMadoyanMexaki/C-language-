#include <stdio.h>

#define TOTAL_DIGITS    10

int main() {
    int digits[TOTAL_DIGITS] = {3, 2, 5};
    int change_index = 2; // which index number we should to change

    for(int i = TOTAL_DIGITS-1; i > change_index; i--) {
        digits[i] = digits[i-1];

        printf("digits[%d] = digits[%d]\n", i, i-1);
    } 

    digits[change_index] = 4; // change third item of array

    for(int i = 0; i < TOTAL_DIGITS; i++) {
        printf("%d ", digits[i]);
    }

    return  0;
}
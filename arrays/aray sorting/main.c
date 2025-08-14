#include <stdio.h>

#define TOTAL_DIGITS    10

int main() {
    // Sorting by selection sort algorithm
    
    int digits[TOTAL_DIGITS] = {1, 0, 4, -9, 2, -15};

    for(int i = 0; i < TOTAL_DIGITS-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < TOTAL_DIGITS; j++) {
            if(digits[j] < digits[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            int temp = digits[i];
            digits[i] = digits[min_idx];
            digits[min_idx] = temp;
        }
    }

    printf("Սորտավորված զանգվածը՝ ");
    for (int i = 0; i < TOTAL_DIGITS; i++) {
        printf("%d ", digits[i]);
    }

    return  0;
}
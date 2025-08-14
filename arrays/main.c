#include <stdio.h>

#define ARR_LENGTH     13

int main() {
    int array[ARR_LENGTH] = {1, 2, 3, 34};
    int array2[] = {45, -89, 4};
    short digits[] = {-1, [2] = 4, 5, [9] = -8};

    size_t array2_bytes_size = sizeof(array2);
    size_t array2_length = array2_bytes_size / sizeof(array[0]);

    // printf("Array's bytes %zu\n", array2_bytes_size);
    // printf("Array's length %zu\n", array2_length);

    // for(int i = 0; i < array2_length; i++){
    //     printf("%d \n", array2[i]);
    // }

    for(int i = 0; i < sizeof(digits) / sizeof(digits[1]); i++){
        printf("%d ", digits[i]);
    }

    return 0;
}
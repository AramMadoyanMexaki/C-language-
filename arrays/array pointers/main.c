#include <stdio.h>

int main() {
    short ar[] = {3, 5, 6, 9, 7, 1, 8, 4, 2};
    short *ptr_ar;

    ptr_ar = ar;

    short x = ptr_ar[2];  // arr[index] = *(ar + index) 

    return 0;
}

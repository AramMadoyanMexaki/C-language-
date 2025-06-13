#include <stdio.h>

int main() {
    int g = 4;
    int *address = &g;

    printf("Address = %u\n", address);

    address++; // address + 4 (sizeOf(int))
    address += 3; // address + 12 (sizeOf 3 ints)

    printf("Address = %u\n", address);

    return 0;
}
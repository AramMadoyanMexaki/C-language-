#include <stdio.h>

int main() {
    char s[10];
    // scanf("%9s \n", s); // reads to the first space
    fgets(s, sizeof(s), stdin); // hello world -> hello wor. It reads the bits we gave it, but minus 1. So it reads 10-1 (9) bits.
    puts(s);

    return 0;
}
#include <stdio.h>

int main() {
    char str[] = {'A', 'r', 'm', 'e', 'n', 'i', 'a', '\0'};
    char s[] = "Aram Madoyan";
    char buffer[512] = "Hello World";

    char b[] = "Hel" "lo"
               " Wor" "ld";

    char sym = 'a';

    printf("%d\n", sym); // 97

    const char* text = "Some Text"; // Can only read
    char s2[] = "Some Text"; // Can and read and change the text

    char s3[] = "Hello World. Hello \"C\" language";
    puts(s3); // print string

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello Men";
    char urish_str[5];

    strncpy(urish_str, str, sizeof(urish_str)); // urish_str Այն տեքստը որը լցվում է, str այն տեքստը որից ավելանում է, sizeof ավելացման չափը
    strcpy(urish_str, str);
    puts(urish_str);


    size_t length = strlen(urish_str); // string length
    printf("%zu \n", length);

    return 0;
}
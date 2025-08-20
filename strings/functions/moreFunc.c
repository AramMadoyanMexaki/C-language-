#include <stdio.h>
#include <stdlib.h>

int main() {
    // sprintf() from <stdio.h>
    double width = 2.4, height = 0.76, depth = 3.14;
    char name[] = "Chair";
    char info[100];
    const char format[] = "(%s: %.2f x %.2f x %.2f)";

    sprintf(info, format, name, width, height, depth); // info - Այն ինչ պետք է վերադարձնի, format - այն ֆորմատով եր պետք է վերադարձնի, name, width, height, depth - արժեքները 
    puts(info);

    // sprintf() using for make int to str

    int var_i = -123;
    char str_var[10];

    sprintf(str_var, "%d", var_i);
    puts(str_var);

    // atoi(), atol(), atoll(), atof() from stdlib.h
    // Make str type numbers to integer type numbers

    int a = atoi("123");
    long b = atol("23456789087654");
    long long c = atoll("123456789009876543");
    double d = atof("345.45");

    printf("a = %d\nb = %ld\nc = %lld\nd = %.2lf\n", a, b, c, d);

    return 0;
}
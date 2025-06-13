#include <stdio.h>

int main() {
    int arg = 777;
    // int *arg_ptr, *ptr;
    int *arg_ptr;
    char *ptr; // types are different || Warning !

    arg_ptr = &arg;
    ptr = (char *)arg_ptr; 

    printf("arg = %d, ptr = %p\n", arg, ptr);

    return 0;
}
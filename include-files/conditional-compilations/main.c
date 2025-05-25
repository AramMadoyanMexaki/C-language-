#define LANG_C // Let's imagine that this determines what programming language we use.

#if defined(LANG_C)
#    include <stdio.h> // C
#else
#    include <iostream> // C++
#endif


int main(void)
{
    int x = 0;

#ifdef LANG_C
    printf("X = %d\n", x); // C
#else
    std::cout << x << std::endl; // C++
#endif

    return 0;
}
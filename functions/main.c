#include <stdio.h>

// Broke hard problem to simple problems then join it

int min_2(int a, int b)
{
    return (a > b) ? b : a;
}

int min_3(int a, int b, int c)
{
    int min = min_2(a, b);
    return (min < c) ? min : c;
}

int main() 
{
    int x = 3, y = 12, z = 4;

    // Functions call variants

    int res1 = min_2(x, y);
    int res2 = min_3(x, y, z);
    int res3 = min_2(min_2(x, y), z);
    int res4 = min_2(x, min_2(y, z));

    int res5 = min_2(min_2(x, y), min_2(y, z));
    int res6 = min_2(min_2(x, y), min_3(x, y, z));


    return 0;
}
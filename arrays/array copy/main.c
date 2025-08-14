#include <stdio.h>

int main() {
    float func1[100] = {1.4, 2.8, 0, -3.5, 7.1, 11.4, 7.5};
    int func2[50]; // There will be no mistake when making a copy.

    // func2 = func1; error

    int size1 = sizeof(func1) / sizeof(func1[0]);
    int size2 = sizeof(func2) / sizeof(func2[0]);
    int minSize = (size1 < size2) ? size1 : size2;

    for (int i = 0; i < minSize; i++) {
        func2[i] = (int)func1[i];
        printf("%d ", func2[i]);
    }

    return 0;
}
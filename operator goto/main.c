#include <stdio.h>

int main() {
    int s = 0;

    for(int i = 0; i <= 10; i++) {
        for(int j = 7; j >= 5; j--) {
            if(i - j > 0) {
                goto exit_sum; // break all loops. exit_sum is the point where should go compiler
            }

            s += i - j;
        }
    }

    exit_sum: printf("%d\n", s);

    return 0;
}
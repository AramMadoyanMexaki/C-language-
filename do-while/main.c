#include <stdio.h>

int main() {
    int secret_code = 23;
    int enter_code;

    do {
        printf("Please enter the secret code: ");
        scanf("%d", &enter_code);
    } while(enter_code != secret_code);
    
    printf("Access is allowed! \n");

    return 0;
}
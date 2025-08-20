#include <stdio.h>
#include <string.h>

int main() {
    char s1[12] = "Hello";
    char s2[10] = "Hello";

    int res = strcmp(s1, s2); // strcmp() Ստուգում է տեքստերը նույնն են թե ոչ
    
    if(res == 0) {
        puts("Տեքստերը համընկնում են");
    } else {
        puts("Տեքստերը չեն համընկնում");
    }

    // համեմատություն strncmp()

    char *strings[] = {
        "Ship", "Shop", "Snow", "Super", "Car", "Hello"
    };

    for(int i = 0; i < sizeof(strings) / sizeof(strings[i]); i++) {
        printf("mem address %p\n", strings[i]); // ամեն բառի հասցեն հիշողության մեջ
        if(strncmp(strings[i], "Sh", 2) == 0) { // համեմատում է ամեն տեքստը տրված պայմանների հետ ("Sh" - այն բառերը որոնք սկսում են սրանով, 2 - ստուգիր առաջին 2 տարրերը)
            puts(strings[i]);
        }
    }

    return 0;
}
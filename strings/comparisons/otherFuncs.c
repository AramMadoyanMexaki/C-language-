// =======================
// String search functions
// =======================

// strchr(str, 'val')
//    փնտրում է սիմվոլը (val) տողի str մեջ՝ ձախից դեպի աջ
//    վերադարձնում է ցուցիչ դեպի այդ սիմվոլը կամ NULL, եթե չի գտել

// strrchr(str, 'val')
//    փնտրում է սիմվոլը (val) տողի str մեջ՝ աջից դեպի ձախ
//    վերադարձնում է ցուցիչ դեպի այդ սիմվոլը կամ NULL

// strstr(str, "find")
//    փնտրում է ենթատողը find տողի str մեջ՝ ձախից դեպի աջ
//    վերադարձնում է ցուցիչ մինչև զանգվածի վերջին սիմվոլները կամ NULL

// strpbrk(str, "find")
//    փնտրում է str-ում find-ի ցանկացած սիմվոլի առաջին հանդիպումը
//    վերադարձնում է ցուցիչ մինչև զանգվածի վերջին սիմվոլները կամ NULL


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abracadabra";
    char *ptr = strchr(str, 'a');
    char *ptr2 = strrchr(str, 'a');

    printf("str = %p\nptr = %p\n", str, ptr2);

    if(ptr2 != NULL) {
        printf("*ptr2 = %c\n", *ptr2);
    }

    // strstr(), strpbrk()

    char str2[] = "sinuscosinus";
    char *ptr3 = strstr(str2, "sc");

    printf("str2 = %p\nptr3 = %p\n", str2, ptr3);

    if(ptr3 != NULL){
        printf("*ptr3 = %s\n", ptr3);
    }


    char pass[] = "1(2#$*$&6(007";
    char *ptr4 = strpbrk(pass, "@#$^&*()?");

    printf("pass = %p\nptr4 = %p\n", pass, ptr4);

    if(ptr4 != NULL) {
        printf("*ptr4 = %s\n", ptr4);
    }

    return 0;
}
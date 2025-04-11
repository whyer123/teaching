#include <stdio.h>

int main() {

    int number = 0;

    char chr = 'a';

    printf("1: number's address:%p\n chr's address:%p\n", &number, &chr);


    int *p_number = NULL;
    p_number = &number;
    
    char *p_chr = NULL;
    p_chr = &chr;

    printf("2: number's address:%p\n chr's address:%p\n", p_number, p_chr);



    // 用指針印值

    printf("3: number=%d\n chr=%c\n", *p_number, *p_chr);

    

    return 0;
}
#include <stdio.h>
#include <ctype.h>

// int three_parts(int A[], int size) {

// }

// int three_parts(int A[][3], int size ) {

// }

int main() {

    char c1='a';
    char c2='A';

    printf("%d %d\n", c1, c2);

    char c3 = 'b';
    // c3 = c3 - 32;
    toupper(c3);

    printf("%c\n", toupper(c3));


    return 0;
}
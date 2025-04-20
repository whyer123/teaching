#include <stdio.h>

int add_value( int n ) {
    n = n + 1;
    return n;
}

int main() {

    int c = 1;
    printf("c=%d\n", c);

    int d = 0;

    d = add_value(c);

    printf("d=%d\n", d);

    return 0;
}
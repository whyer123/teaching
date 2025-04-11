#include <stdio.h>

void add_value( int n ) {
    n = n + 1;
}

int main() {

    int c = 1;
    printf("c=%d\n", c);

    add_value(c);

    printf("c=%d\n", c);

    return 0;
}
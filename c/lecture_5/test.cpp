#include <stdio.h>
#include <math.h>

int my_fun( int n );

int main() {
    
    int a = 0;

    a = 1;

    a = my_fun(a);

    printf("a:%d\n", a);

    return 0;
}

int my_fun( int n ) {
    return n+5;
}


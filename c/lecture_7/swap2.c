#include <stdio.h>

void swap( int num1[] , int num2[] ) {

    int tmp=0;
    
    tmp = num1[0];
    num1[0] = num2[0];
    num2[0] = tmp;

    return;
}

int main() {

    int a[1] = {3};
    int b[1] = {5};

    printf("a:%d, b:%d\n", a[0], b[0]);

    swap( a , b );

    printf("a:%d, b:%d\n", a[0], b[0]);

    return 0;
}
#include <stdio.h>

int swap( int *p_a , int *p_b ) {

    if( p_a == NULL || p_b == NULL ) {

        printf("error\n");
        return -1;
    }

    int tmp = *p_a;

    *p_a = *p_b;
    *p_b = tmp;

    return 0;
}

int main() {

    int num1 = 123;
    int num2 = 456;
    int *p = NULL;

    if( swap( &num1 , p ) == -1 ) {
        printf("swap 掛掉囉");
    }

    printf("%d %d\n", num1, num2);

    printf("byebye\n");

    return 0;
}
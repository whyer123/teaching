#include <stdio.h>

void add_1( int &a ) { //call by refference
    a = a + 1;
}

void add_2( int *p_a ) {
    *p_a = *p_a + 1;
}

int main() {

    int num = 3;
    printf("Init: num:%d\n", num);

    add_1( num );
    printf("After add_1: num:%d\n", num);

    add_2( &num );
    printf("After add_2: num:%d\n", num);


    return 0;
}


#include <stdio.h>

void swap( int num1 , int num2 ) {

    int tmp=0;
    
    tmp = num1;
    num1 = num2;
    num2 = tmp;

    return;
}

int main() {

    int a = 1;
    int b = 10;

    //before swap
    printf("a:%d, b:%d\n", a, b);

    swap(a,b);

    //after swap
    printf("a:%d, b:%d\n", a, b);

    return 0;
}
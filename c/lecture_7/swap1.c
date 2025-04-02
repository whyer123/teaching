#include <stdio.h>

void swap( int num1 , int num2 ) {

    int tmp=0;

    printf("before  num1:%d, num2:%d\n", num1, num2);
    
    tmp = num1;
    num1 = num2;
    num2 = tmp;

    printf("after  num1:%d, num2:%d\n", num1, num2);

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
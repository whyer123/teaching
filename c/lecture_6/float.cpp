#include <stdio.h>

//不要用浮點數比大小！

int main() {

    double a = 0.01;
    float b = 0.02;

    printf("%.100lf", a);

    if( a + b == 0.03 ) {
        printf("a is equal to b\n");
    } else {
        printf("a is not equal to b\n");
    }

    return 0;
}
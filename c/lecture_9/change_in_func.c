#include <stdio.h>

void add_value( int n ) {
    n = n + 1;
}

void add_value_2( int a[] ) {
    a[0] = a[0] + 1;
}

int main() {

    int c = 1;
    printf("c=%d\n", c);

    add_value(c);

    printf("c=%d\n", c);

    //part2

    int array[1] = {1};

    printf("array[0]=%d\n", array[0]); // *(array)

    add_value_2( array );

    printf("array[0]=%d\n", array[0]); //告訴我為什麼是2

    /*
    1. 把function 帶入array 複製了什麼 可以畫圖
    2. array[0] 等同 *(array)
    3. 不是直接複製所有陣列裡的值，而是？
    */

    return 0;
}
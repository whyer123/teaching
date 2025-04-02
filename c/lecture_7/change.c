#include <stdio.h>

void add_one( int a ) {
    a = a+1;
    return;
}

void add_one_array( int array[] , int size ) {
    for( int i=0 ; i<size ; i++ ) {
        array[i] = array[i] + 1;
    }
} 

int main() {

    int number = 1;
    int array[3] = {1,2,3};

    printf("number:%d, array:%d %d %d\n", number, array[0], array[1], array[2]);

    add_one( number );
    add_one_array( array , 3 );

    return 0;
}
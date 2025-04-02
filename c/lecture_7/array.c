#include <stdio.h>

#define SIZE 3

int main() {

    int size = 3;

    int array[size];

    int array1[] = {1,2,3}; //1 2 3
    int array2[SIZE] = {0}; //0 0 0
    int array3[SIZE] = {1}; //1 0 0

    for( int i=0 ; i<3 ; i++ ) {
        printf("array1:%d, array2:%d, array3:%d \n" , array1[i], array2[i], array3[i]);
    }

    int array[1000]; //1000 個 0

    for( int i=0 ; i<1000 ; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}
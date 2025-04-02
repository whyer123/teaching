#include <stdio.h>

void print_array( int array[] , int size ) {

    for( int i=0 ; i<size ; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return;
}

int main() {
    
    int array1[5] = {1,3,5,7,9};
    int array2[10] ={1,2,3,4,5,6,7,8,9,10} ;

    print_array( array1 , 5 ); 
    print_array( array2 , 10 ); 

    return 0;
}
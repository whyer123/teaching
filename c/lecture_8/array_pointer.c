#include <stdio.h>

int main() {

    char array[3] = {65,66,67};

    printf("1: array[0]'s addr:%c\n", *(array) ); // &(array[0])
    printf("1: array[1]'s addr:%c\n", *(array+1) );
    printf("1: array[2]'s addr:%c\n", *(array+2) );

    printf("\n2: array's addr: %p\n", array);

    return 0;
}
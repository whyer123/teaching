#include <stdio.h>

int main() {

    char array[3] = {0};

    printf("1: array[0]'s addr:%p\n", &(array[0]) );
    printf("1: array[1]'s addr:%p\n", &(array[1]) );
    printf("1: array[2]'s addr:%p\n", &(array[2]) );

    printf("\n2: array's addr: %p\n", array);

    return 0;
}
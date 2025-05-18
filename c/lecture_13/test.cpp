#include <stdio.h>

int main() {

    int *a = NULL;
    
    a = new int;

    *a = 3;

    printf("%d", *a);

    delete a;

    return 0;
}
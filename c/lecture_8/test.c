#include <stdio.h> 

int main() {

    int a[3] = {1,2,3};
    char b[3] = {65,66,67};

    for( int i=0 ; i<3 ; i++ ) {
        printf("%c\n", b[i]);
    }

    return 0;
}
#include <stdio.h>

void print_string( char str[] ) {
    for( int i=0 ; str[i] != 0 ; i++ ) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {

    char str[] = "hello world!";

    print_string( str );

    return 0;
}
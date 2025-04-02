#include <stdio.h>

int main() {

    char name[5] = {1,1,1,1,1};

    printf("Enter your name: ");
    // scanf("%s", name);
    fgets( name , 10 , stdin );

    printf("Your name: %s\n", name);

    printf("-------------------------------\n");

    for( int i=0 ; i<5 ; i++ ) {
        printf("%c %d\n", name[i], name[i]);
    }

    return 0;
}
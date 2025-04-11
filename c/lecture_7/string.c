#include <stdio.h>

int main() {

    // Alice

    char name[10] = {1,1,1,1,1}; 
    printf("Enter your name: ");
    // scanf("%4s", name); //不加入&
    fgets( name , 9 , stdin );

    printf("Your name: %s\n", name);

    printf("-------------------------------\n");

    for( int i=0 ; i<5 ; i++ ) {
        printf("%c %d\n", name[i], name[i]);
    }

    return 0;
}
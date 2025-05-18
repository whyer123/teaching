#include <stdio.h>
#include <string.h>
#include <stdlib.h> //atoi

#define ARRAY_MAX 100

int main() {

    char input[1000] = {0};
    int a[ARRAY_MAX] = {0};
    
    printf("Enter the string:\n");
    fgets( input , 1000 , stdin );

    char *token = NULL;

    token = strtok( input , " ()-");

    int i=0;

    while (token != NULL) {

        printf("%s\n", token);

        // a[i] = atoi(token);
        token = strtok( NULL , " ()-" );
        i++;
        
    }

    // for( int j=0 ; j<i ; j++ ) {
    //     printf("%d ", a[j]);
    // }
    // printf("\n");

    return 0;
}
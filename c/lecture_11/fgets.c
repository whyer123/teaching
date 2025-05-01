#include <stdio.h>
#include <string.h>

int main() {

    char str[20] = {0};

    printf("Please enter a sentence: \n");

    // scanf("%s", str); 
    // puts(str);

    fgets( str , 20 , stdin );

    int size = strlen(str);
    str[size-1] = 0;

    puts(str);
    

    //ch_8 p9

    printf("This is the end.\n");

    return 0;
}
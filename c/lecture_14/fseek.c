#include <stdio.h>

int main() {

    FILE *p_file;
    p_file = fopen( "example.txt" , "w");
    fputs( "This is an apple." , p_file );
    fseek( p_file , -8 , SEEK_CUR );
    fputs( " sam" , p_file );
    fclose( p_file );

    return 0;
}
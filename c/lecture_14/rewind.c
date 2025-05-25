#include <stdio.h>

int main() {
    char str[80];
    float f;
    FILE *p_file;
    p_file = fopen( "myfile.txt" , "r+" );
    fgets( str , 80 , p_file );
    puts(str);

    rewind(p_file);
    fgets( str , 80 , p_file );
    puts(str);

    return 0;
}
#include <stdio.h>

int main() {

    char str1[] = "hello?";
    char *str2 = "hello?";

    puts(str1);
    puts(str2);

    str1[5] = '!';
    puts(str1);

    str2[5] = '!';
    puts(str2);
    //why?

    return 0;
}
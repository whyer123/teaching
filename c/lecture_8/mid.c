#include <stdio.h>

int main() {

    char str[4] = {0};

    int a = 1;
    int b = 7;
    int c = 2;

    str[0] = a + 48;
    str[1] = b + 48;
    str[2] = c + 48;

    printf("%s\n", str);




    return 0;
}
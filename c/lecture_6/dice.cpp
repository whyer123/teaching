#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int rand_number = rand()%6;

    printf("%d\n", rand_number);

    return 0;
}
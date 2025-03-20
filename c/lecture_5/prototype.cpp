#include <stdio.h>

void funcA();
void funcB();

void funcA() {
    printf("This is funcA\n");
    funcB();  
}

void funcB() {
    printf("This is funcB\n");
    funcA();  
}

int main() {
    funcA();  
    return 0;
}
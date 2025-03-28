#include <stdio.h>

void funcA();
void funcB();

void funcB() {
    printf("This is funcB\n");
    funcA();  
}

void funcA() {
    printf("This is funcA\n");
    funcB();  
}

int main() {
    funcA();  
    return 0;
}
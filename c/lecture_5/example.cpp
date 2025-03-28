#include <stdio.h>

int maximum( int x, int y, int z);

int main(void) {
    
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    printf("%s", "Enter three numbers: ");
    scanf("%d%d%d", &number1, &number2 , &number3);

    int max = 0;
    max = maximum( number1 , number2 , number3);

    printf("Maxinum is: %d\n", max);

}

int maximum( int x, int y, int z) {

    int max = x;
    
    if( max < y ) {
        max = y;
    }

    if( max < z ) {
        max = z;
    }

    return max;
}

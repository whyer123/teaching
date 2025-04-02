#include <stdio.h>

// 先不要使用動態大小的陣列

int main() {

    // int array[1000]= {0};

    int size=0;

    printf("Enter a size: ");
    scanf("%d", &size);

    int array[size] = {0};

    for( int i=0 ; i<size ; i++ ) {
        printf("Enter the %d elements: ", i);
        scanf("%d", &array[i]);
    }

    printf("Your array: \n");
    for( int i=0 ; i<size ; i++ ) {
        printf("%d ", array[i]);
    }

    printf("\n");


    return 0;
}
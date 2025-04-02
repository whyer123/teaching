#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main() {
    int a[SIZE] = {0};
    int k = 0;

    srand(time(NULL));  

    while (k < SIZE) {
        int r = rand() % 49 + 1; 
        int dup = 0;            
        
        for (int i = 0; i < k; i++) {
            if (r == a[i]) {
                dup = 1;  
                break;
            }
        }

        
        if (dup == 0) {
            a[k] = r;
            k++;
        }
    }

    
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
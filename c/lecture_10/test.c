#include <stdio.h>

int main()
{
    char a[] = "Hearts";
    char b[] = "Diamonds";
    char c[] = "Clubs";
    char d[] = "Spades";
    char* arr[4];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    for(int i=0; i<4;i++)
    printf("%s, address %X\n", arr[i], arr[i]);
    printf("%s\n", a);
}
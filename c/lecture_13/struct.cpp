#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[20];
};

int main() {

    struct student classmate;

    classmate.id = 1;
    // classmate.name = "Alice";

    // char str[] = "Alice";
    // int size = 5;
    // for( int i=0 ; i<5 ; i++ ) {
    //     classmate.name[i] = str[i];
    // }
    // (classmate.name)[5] = 0; 

    strcpy( classmate.name , "Alice" );

    printf("%s, %d\n", classmate.name , classmate.id);

    struct student *p_classmate;
    p_classmate = &classmate; 

    printf("%s, %d\n", (*(p_classmate)).name , (*(p_classmate)).id);
    
    printf("%s, %d\n", p_classmate->name , p_classmate->id);

    return 0;
}
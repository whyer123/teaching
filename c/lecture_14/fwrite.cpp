#include <stdio.h>
#include <string.h>

typedef struct student {
    int id;
    char name[20];
} student;

int main() {

    student *s = new student;

    s -> id = 0;
    strcpy( s->name , "amy" );

    FILE *p_file = fopen( "fwrite.txt" , "w+" );

    fwrite( s , sizeof(student) , 1 , p_file );

    rewind( p_file );

    student *s2 = new student;

    fread( s2 , sizeof(student) , 1 , p_file );

    printf("student: id:%d name:%s\n", s2->id, s2->name);
    

    return 0;
}
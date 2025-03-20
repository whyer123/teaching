#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,min=0,max=0;
    double avg=0.0;
    int i=0;  //test
    while(1){
        if( i > 1000 ) break;
    printf("input a,b,c,d:");
    scanf("%d %d %d %d", &a, &b, &c , &d);
    
    if((a==0) & (b==0) & (c==0) & (d==0))
    {
        break;
    }


    avg=(float)(a+b+c+d)/4.0;
    
    max=a;
    if(b>max){
        max=b;
    }

    if(c>max){
        max=c;
    }

    if(d>max){
        max=d;
    }

    min=a;
    if(b<min){
        min=b;
    }

    if(c<min){
        min=c;
    }

    if(d<min){
        min=d;
    }
    printf("avg%lf %d %d",avg,min,max);


    i=i+1;

    }
    return 0;
}
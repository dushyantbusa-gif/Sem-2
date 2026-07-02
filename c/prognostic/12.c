
#include<stdio.h>

void main(){

    float t,v,s,l,m;

    printf("entre the v,s,l,m");
    scanf("%f",&v);
    scanf("%f",&s);
    scanf("%f",&l);
    scanf("%f",&m);
    t=((v+s)+(l-m)*l);
    printf("%f",t);
    
}
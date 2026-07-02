#include<stdio.h>

void main(){
    float s,a,c,b;
    printf("enter the num a,c, and b");
    scanf("%f %f %f ",&a,&c,&b);
    s=((4*a+c)-2*a*b)/100;

    printf("s=%f",s);
}
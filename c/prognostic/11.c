#include<stdio.h>

void main(){

    float a,p,r,n;
    printf("enter the num p,r and n");
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&n);


	a=p*(1+(r/100)/n)-p;

    printf("a=%f",a);

}
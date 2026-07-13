#include<stdio.h>
void formule(float s,float l,float w,float b,float h,float r){
    //Square
    float Square=s*s;
    //Rectangle
    float Rectangle=l*w;
    //Triangle
    float Triangle=0.5*b*h;
    //Circle
    float Circle=3.14*(r*r);
    printf("Square=%f",Square);
    printf("Rectangle=%f",Rectangle);
    printf("Triangle=%f",Triangle);
    printf("Circle=%f",Circle);

}
void main(){
    float s,l,w,b,h,r;
    printf("Square value");
    scanf("%f",&s);
    printf("Rectangle value");
    scanf("%f",&l);
    scanf("%f",&w);
    printf("Triangle value");
    scanf("%f",&b);
    scanf("%f",&h);
    printf("Circle value");
    scanf("%f",&r);
    formule(s,l,w,b,h,r);
}
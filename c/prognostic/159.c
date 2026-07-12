#include<stdio.h>
#include<math.h>
void simple(float p,float n,float r){
    float si= p * pow((1+r/100),n);
    printf("%f",si);
}
void main(){
   
    float r,p,n;
    printf("Entre the p,n,r");
    scanf("%f%f%f",&p,&n,&r);
    simple(p,n,r);


}
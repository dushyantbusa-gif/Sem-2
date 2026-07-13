#include<stdio.h>
void power(int b,int e){
    int r=1;
    for(int i = 1;i <= e;i++){
        r=r*b;
    }
    printf("%d^%d=%d",b,e,r);
}
void main(){
    int b,e;
    printf("entre the b:");
    scanf("%d",&b);
    printf("entre the e:");
    scanf("%d",&e);
    power(b,e);

}
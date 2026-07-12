#include<stdio.h>
void fact(int a){
  int fact=1;
  for(int i=1;i<=a;i++){
    fact= fact*i;
    }
    printf("%d",fact);
}
void main(){
    int x;
    printf("entre the Num of x:");
    scanf("%d",&x);
    fact(x);
}
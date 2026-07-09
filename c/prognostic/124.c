#include<stdio.h>
void s1(int *a,int *b){
    int t=*a;
        *a=*b;
        *b=t;

}
void main(){
    int x,y;
    printf("entre the x,y");
    scanf("%d%d",&x,&y);
    s1(&x,&y);
    printf("x=%d\ny=%d",x,y);

}
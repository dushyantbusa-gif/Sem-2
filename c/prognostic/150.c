#include<stdio.h>
void evenodd(int a){
    if(a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
void main(){
    int x;
    printf("entre the Num of x:");
    scanf("%d",&x);
    evenodd(x);

}

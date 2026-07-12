#include<stdio.h>
void triangle(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
void main(){
    int x;
    printf("entre the num of the pitan:");
    scanf("%d",&x);
    triangle(x);
}
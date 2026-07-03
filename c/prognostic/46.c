#include<stdio.h>
void main(){
    int i, n, num = 1;
    printf("enter the n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("%d", num);
        if (i<n){printf(",");}
        num = num * 2;
    }
}

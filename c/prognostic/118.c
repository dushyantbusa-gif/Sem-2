#include<stdio.h>
void main (){
    int a[10],b[10],i;
    printf("entre the arr:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
       a[i]=b[i];
    }
    for(i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
}
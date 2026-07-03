#include<stdio.h>
void main(){
    int a,b,c,min;
    printf("entre the a:");
    scanf("%d",&a);
    printf("entre the b:");
    scanf("%d",&b);
    printf("entre the c:");
    scanf("%d",&c);
    min=(a<b)?((a<c) ? a:c):((b<c) ? b:c);
    printf("%d",min);

}
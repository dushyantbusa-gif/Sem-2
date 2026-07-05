#include<stdio.h>
void main(){
    int i,j=1,ch,f=1;
    for (i=5;i>=1;i--){
        for (j=1;j<=i;j++){
            
            printf("%d",f*j);
        }
        printf("\n");
        f++;
    }
}
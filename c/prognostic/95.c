#include<stdio.h>
void main(){
    char i,j;
    for (i='a';i<='e';i++){
        for (j='a';j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
}
#include<stdio.h>
void main(){
    char i,j,ch='z';
    for (i='a';i<='e';i++){
        for (j='a';j<=i;j++){
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
}
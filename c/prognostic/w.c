#include<stdio.h>
void main(){
    int len=0,i;
    char str[100];
    printf("Entre The string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("%d",len);
}

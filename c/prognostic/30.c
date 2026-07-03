#include<stdio.h>
void main (){
    char ch;
    printf("entre the ch:");
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z') {
        ch=ch-32;
        printf("upp:%c",ch);
    }
    
    else{
        printf("lowr");
    }
}
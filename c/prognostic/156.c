#include<stdio.h>
void ascll(char a){
    int r;
    r=a;
    printf("%d",r);
    
}
void main(){
	char ch;
	printf("entre the ch:");
	scanf("%c",&ch);
	ascll(ch);
}
#include<stdio.h>
void ascll(int a){
    char r;
    r=a;
    printf("%c",r);
    
}
void main(){
	int ch;
	printf("entre the ch:");
	scanf("%c",&ch);
	ascll(ch);
}
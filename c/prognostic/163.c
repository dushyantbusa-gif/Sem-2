#include<stdio.h>
void time(char ch,int no){
    for(int i=0;i<no;i++){
        printf("%c",ch);
    }

}
void main(){
    char ch;
    int no;
    printf("Entre The ch");
    scanf("%c",&ch);
    printf("Entre The no");
    scanf("%d",&no);
    time(ch,no);

}
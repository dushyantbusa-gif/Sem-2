#include<stdio.h>
void main(){
    int i,j,n=5,t,num=1;
    for(i=1;i<=n;i++){
        if(i%2!=0){
            for(j=1;j<=5;j++){
            printf("\t%d",num++);}
        }
        else{
            t=num+n-1;
            for(j=1;j<=n;j++){
                printf("\t%d",t);
                t--;
                num++;
            }
            
        }
        printf("\n");


    }
    
}   
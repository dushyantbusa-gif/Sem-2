#include<stdio.h>
void main(){
    int i=1,j=2,n=10;
    float sum=0;
    while(i<=n && j<=n){
        
            printf("%d-%d+",i,j);
            sum=sum+((float)i-(float)j);
            
    j=j+2;
    i=i+2;
            
} 
printf("\nsum=%f",sum);
     
         

}
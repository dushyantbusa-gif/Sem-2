#include<stdio.h>

void main(){
    int i,a[10],b[10],tamp,j,max;
    int *p=a;
   
    for(i=0;i<10;i++){
        scanf("%d",(p+i));
    }   
     max=*(p+0);
    for(i=1;i<10;i++){
       if(max<*(p+i)){
        max=*(p+i);

       }
    }     
    printf("%d",max);

    }


#include<stdio.h>

void main(){


    int a,b,c,d,e;
    float avg;

        printf("enetr your marks a,b,c,d,e,");
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

        avg=(a+b+c+d+e)/5;

        if(a<100 && b<100 && c<100 && d<100 && e<100){
if(a>=40 && b>=40 && c>=40 && d>=40 && e>=40){
            if(avg>=90 && avg<=100){

                printf("A+\n");
            }
            else if(avg>=60 && avg<=89){
                printf("B+\n");
            }
             else if(avg>=40 && avg<=59){
                printf("c+\n");
            }
            else{
                printf("fail");
            }
        }
else{
 printf("fail\n");
  }
    }
    else{
        printf("not valid\n");
    }
    printf("avg=%f",avg);    








}
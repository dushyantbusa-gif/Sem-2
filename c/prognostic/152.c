#include<stdio.h>
void prime(int a){
    int prime1=0,not_prime=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            prime1++;
        }
        else{
            not_prime++;
        }
    }
    if(prime1==2){
        printf("prime");
    }
    else{
                printf("not-prime");

    }
}
void main (){
    int x;
    printf("entre the num of x:");
    scanf("%d",&x);
    prime(x);
}
#include<stdio.h>
#include<math.h>
void sroot(int a){
    float r;
    r=sqrt(a);
    printf("%f",r);
    
}
void main(){
	int num;
	printf("entre the num:");
	scanf("%d",&num);
	sroot(num);
}

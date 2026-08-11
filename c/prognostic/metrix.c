#include<stdio.h>
void main(){
    int i,j,a[3][3],p=0,n=0,z=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j] < 0 ){
                n++;
            }
            else if(a[i][j] > 0){
                p++;
            }
            else{
                z++;
            }
        }
    } 
    printf("p=%d",p);
    printf("n=%d",n);
    printf("z=%d",z);
}
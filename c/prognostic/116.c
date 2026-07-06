#include<stdio.h>
void main (){
    int rows,colms,i,j;
    printf("enter the rows");
    scanf("%d",&rows);
    printf("enter the colms");
    scanf("%d",&colms);
    int arr[rows][colms];
    for(i=0;i<rows;i++){
          for(j=0;j<colms;j++){
            printf("[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
          }  
    }
    for(i=0;i<rows;i++){
          for(j=0;j<colms;j++){
            printf("%d ",arr[i][j]);
            
          } 
          printf("\n"); 
    }
}
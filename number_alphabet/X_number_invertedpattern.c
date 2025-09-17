/*
1        1  
 2      2   
  3    3    
   4  4     
    5      
   4 4    
  3   3   
 2     2  
1       1 */

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(j==i || j==2*n-i){
                printf("%d ",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=2*n;j++){
            if(j==i ||j==2*n-i){
                printf("%d",i);
            }
           else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
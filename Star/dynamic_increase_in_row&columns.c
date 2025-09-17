#include<stdio.h>
int main(){
    int n,i,k,j;
    printf("ENter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3*i-1;j++){
            printf("* ");
        }
        printf("\n");
        if(i==n){
            break;
        }
      for(j=1;j<=i;j++){
          for(k=1;k<=i;k++){
            printf("* ");
        }
           printf("\n");
      }
     
    }
}
//program to print Repeated Incremental Star Pattern

#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
     printf("*\n");
     for(j=0;j<i;j++){
         for(k=1;k<=3;k++){
         printf("* ");
     }
     printf("\n");
    }
    }
    return 0;
}
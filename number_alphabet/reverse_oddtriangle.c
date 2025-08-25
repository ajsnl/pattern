//Program to Print Inverted Triangle of Odd Numbers

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,limit,j;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    for(i=limit;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j*2-1);
        }
        printf("\n");
    }
    
}
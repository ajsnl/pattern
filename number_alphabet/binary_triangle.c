//Program to Print a Triangle of Alternating 1s and 0s

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,limit,j;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=0;j<i;j++){
            if(j%2==0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
}
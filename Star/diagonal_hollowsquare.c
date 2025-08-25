// program to print a Hollow Square with Diagonal Pattern

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,j,space;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || i==n-1 ||j==i ||j==0 ||j==n-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
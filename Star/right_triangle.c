#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,limit;
    printf("Enter the Limit\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
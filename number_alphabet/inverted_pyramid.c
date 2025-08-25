/* C Program to Print an Inverted Number Triangle with Decreasing Rows*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int space,i,j,n;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(space=0;space<i;space++){
            printf("  ");
        }
        for(j=1;j<2*n-(2*i);j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
/*Write a C program to print a right-angled triangle pattern where:

The first and last elements of each row are printed as numbers.

The base (last row) is filled completely with numbers.*/
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       for(j=1;j<=i;j++){
           if(j==1 || i==j ||i==n){
               printf("%d ",j);
           }
           else{
               printf("  ");
           }
       }
       printf("\n");
    }
    return 0;
}
 //Write a C program to print a diamond like Star Pattern with skipped rows
 
#include <stdio.h>
#include<stdlib.h>
int main() {
   int n,i,j,num;
   printf("Enter the limit\n");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       if(i==1){
           continue;
       }
       else{
       for(j=0;j<=i;j++){
               printf("* ");
           }
       }
       printf("\n");
   }
   for(i=1;i<n;i++){
       if(i==n-2){
           continue;
       }
       else{
           for(j=n;j>i;j--){
               printf("* ");
           }
           printf("\n");
       }
   }
    return EXIT_SUCCESS;
}
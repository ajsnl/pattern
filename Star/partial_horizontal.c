 //Write a C program to print a Star Pattern with Fixed Rows 
 
#include <stdio.h>
#include<stdlib.h>

int main() {
   int n,i,j,num;
   printf("Enter the limit\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       if(i==2 || i==n){
           for(j=1;j<=n/2;j++){
               printf("* ");
           }
           printf("\n");
           }
           else{
               printf("*\n");
           }
       }
       
   

    return EXIT_SUCCESS;
}
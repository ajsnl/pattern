 //Write a C program to print a F pattern
 
#include <stdio.h>
#include<stdlib.h>

int main() {
   int n,i,j,num;
   printf("Enter the limit\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       if(i==1 || i==4){
           for(j=1;j<n;j++){
               printf("*");
           }
           printf("\n");
           }
           else{
               printf("*\n");
           }
       }
       
   

    return EXIT_SUCCESS;
}
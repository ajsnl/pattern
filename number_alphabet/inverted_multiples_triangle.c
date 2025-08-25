 //Write a C program to print a reverse number triangle in multiples of the given number n
 
#include <stdio.h>
#include<stdlib.h>

int main() {
   int n,i,j,num;
   printf("Enter the limit\n");
   scanf("%d",&n);
   num=n*(n-1)/2;
   for(i=1;i<n;i++){
       
       for(j=1;j<=i;j++){
          
           printf("%d ",num*n);
           num--;
       }
       printf("\n");
   }

    return EXIT_SUCCESS;
}
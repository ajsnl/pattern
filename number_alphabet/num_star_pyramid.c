// program to prints a numeric-star pyramid pattern that combines decreasing numbers, increasing stars, and mirrored numbers on each line.

#include <stdio.h>
#include<stdlib.h>

int main() {
   int n,i,j,star;
   printf("Enter the Limit\n");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       for(j=1;j<=n-i;j++){
           printf("%d ",j);
       }
       for(star=1;star<=2*i;star++){
           printf("* ");
       }
       for(j=n;j>i;j--){
           printf("%d ",j-i);
       }
     
       printf("\n");
   }

    return EXIT_SUCCESS;
}
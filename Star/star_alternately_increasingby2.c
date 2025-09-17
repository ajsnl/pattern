
#include <stdio.h>

int main() {
 int i,n,j;
 int arr[20];
 printf("Enter the limit");
 scanf("%d",&n);
 for(i=0;i<n;i++){
     for(j=0;j<=i;j++){

         if(i>=1 ){
             for(j=0;j<=i+2;j++){
                 printf("* ");
             }
               printf("\n");
         }
                  printf("*\n");
       
     }
 }
    return 0;
}
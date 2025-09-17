// program to print Number Multiplication Pattern


#include<stdio.h>
int main(){
    int i,j,limit;
   printf("ENter  the limit\n");
   scanf("%d",&limit);
   for(i=1;i<limit;i++){
       for(j=0;j<=i;j++){
           
           printf("%d ",j*i);
       }
       printf("\n");
   }
   
    return 0;
}
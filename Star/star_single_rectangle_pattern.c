/*Write a C program to print a star (*) pattern using nested loops.

The program should take an integer n as input (the limit).

It should display stars in a structured pattern, where each row begins with a single *, followed by groups of stars in subsequent lines.

Ensure that the very first single * (from the 0th iteration) is not printed.*/


#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i!=0){
        printf("*\n");
        }
            for(j=0;j<i;j++){
                for(k=1;k<n;k++){
                    printf("* ");
                }
                printf("\n");
            }
    }
    
  
}
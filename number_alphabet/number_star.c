 // Program to print Number and Star Conditional Triangle Pattern
 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n;
    printf("Enter the Limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j%2!=0){
                printf("%d ",i*j);
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}

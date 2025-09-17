//To print a butterfly shape star pattern
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,space;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        for(space=2*n;space>2*i+2;space--){
            printf("  ");
        }
          for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=0;j<i;j++){
            printf("* ");
        }
        for(space=2*i;space<2*n;space++){
            printf("  ");
        }
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    
    
    
        return 0;
}
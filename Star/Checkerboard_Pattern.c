 // program to print Checkerboard Pattern
 
#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if( i%2==0){
            printf(" ");
        }
        for(j=0;j<=n;j++){
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}
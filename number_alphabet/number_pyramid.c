//Program to print a Diamond number pattern

#include<stdio.h>
#include<stdlib.h>
int main(){
    int space, i, j, n;
    printf("Enter the limit\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(space = n - i; space > 0; space--){
            printf("  ");
        }
        for(j = 1; j <= i; j++){
            printf("%d   ", j);
        }
        printf("\n");
    }

    
    for(i = n - 1; i >= 1; i--){
        for(space = n - i; space > 0; space--){
            printf("  ");
        }
        for(j = 1; j <= i; j++){
            printf("%d   ", j);
        }
        printf("\n");
    }

    return 0;
}

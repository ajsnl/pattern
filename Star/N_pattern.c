// program to print N shaped Hollow pattern

#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter the Limit:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0||j==i||j==n-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
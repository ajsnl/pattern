// program to print Inverted Palindromic Number Pyramid


#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        for(j=2;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }


    return 0;
}
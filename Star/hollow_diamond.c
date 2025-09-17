// print  a hollow diamond
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the Limit\n");
    scanf("%d",&n);
        for(i=1;i<2*n;i++){
            for(j=0;j<2*n-1;j++){
                if(i==n-j||i==n+j || i==2*n+n-j-2||j==n+i-2){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }

    return 0;
}


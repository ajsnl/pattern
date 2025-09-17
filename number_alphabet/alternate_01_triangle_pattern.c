//Alternate 0-1 Triangle Pattern

#include<stdio.h>
int main(){
    int n,i,j,a;
    printf("Enṭer the limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>=i;j--){
           a=(j+i)%2;
           if(a==1){
               printf("0 ");
           }
           else{
               printf("1 ");
           }
            
        }
        printf("\n");
    }
    return 0;
}
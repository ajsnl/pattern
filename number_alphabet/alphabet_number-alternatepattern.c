//Alphabet-Number Alternate Pattern

#include<stdio.h>
int main(){
    int n,i,j;
    char ch='A';
    int d=1;
    printf("Enter the limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            if(i%2!=0){
                printf("%c ",ch);
            }
            else{
                printf("%d ",d);
            }
        }
        if(i%2!=0){
        ch++;
        }
         if(i%2==0){
        d++;
        }
       
        printf("\n");
    }
    return 0;
}
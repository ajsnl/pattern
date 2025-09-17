// Program to print a Alphabet Triangle
#include <stdio.h>

int main() {

    int n,i,j,space;
    char ch='A';
    printf("Enter the Limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(space=i;space<n;space++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}
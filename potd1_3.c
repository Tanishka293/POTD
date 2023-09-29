#include<stdio.h>
void printPascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        printf(" ");
        int x=1;
        for(int k=0;k<=i;k++){
          printf(" %d",x);
          x=x*(i-k)/(k+1);
        }
        printf("\n");
    }
}

void main(){
    int n;
    scanf("%d",&n);
    printPascal(n);
}
#include<stdio.h>
void printTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++)
        printf("%d",i+1);
        printf("\n");
    }}

void main(){
    int n;
    scanf("%d",&n);
    printTriangle(n);
}
#include<stdio.h>
void pattern(int a){
    for(int i=0;i<=a;i++){
        for(int j=0;j<i;j++){
            printf("%c",'A'+a-i+j);
        }
        printf("\n");
    }
}

void main(){
    int n;
    scanf("%d",&n);
    pattern(n);
}
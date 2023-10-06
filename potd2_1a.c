#include<stdio.h>
#include<stdlib.h>
void create_pattern(int a){
    for(int i=0;i<a*2-1;i++){
        int printer=a;
        int column=a-abs(a-i-1)-1;
        int count=0;
        int add=0;
        for(int j=0;j<a*2-1;j++){
            printf("%d ",printer);
            if(printer!=a-column && add==0){
                printer-=1;

            }
            else if(column!=-1 && (count<(a*2)-((1+column)*2)||column==a)){
                count+=1;
            }
            else{
                add=1;
                printer+=1;
            }
        }
        printf("\n");
    }
}




void main(){
    int n;
    scanf("%d",&n);
    create_pattern(n);
}
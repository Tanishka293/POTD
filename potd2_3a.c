#include<stdio.h>
int main(){
    int numRows;
    printf("Enter the number of rows:");
    scanf("%d",&numRows);
    for(int i=1;i<=numRows;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        printf("%d",i);
        for(int k=1;k<=2*(numRows-i)-1;k++){
            printf(" ");
        }
        if(i!=numRows){
            printf("%d",i);
        }
        printf("\n");
    }
    for(int i=numRows-1;i>0;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        printf("%d",i);
        for(int k=1;k<=2*(numRows-i)-1;k++){
            printf(" ");
        }
        printf("%d",i);
        printf("\n");
    }
    return 9;
}
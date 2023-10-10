#include<stdio.h>
void pattern(int n){
    int i,j,mid;
    if(n%2==1)
    n++;
    mid=n/2;
    for(i=1;i<=mid;i++){
        for(j=1;j<=mid-i;j++)
        printf(" ");
        if(i==1){
            printf("*");
        }
        else{
          printf("*");
          for(j=1;j<=2*i-3;j++)
          printf(" ");
          printf("*");
        }
        for(j=1;j<=mid-i;j++)
        printf(" ");
        printf("\n");
    }
    for(i=mid+1;i<n;i++){
        for(j=1;j<=i-mid;j++)
        printf(" ");
        if(i==n-1){
            printf("*");
        }
        else{
          printf("*");
          for(j=1;j<=2*(n-i)-3;j++)
          printf(" ");
          printf("*");
        }
        for(j=1;j<=mid;j++)
        printf(" ");
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    pattern(n);
}
#include<stdio.h>
void avg(float a,float b,float c){
    printf("average=%f",(a+b+c)/3);
}
void main(){
    float a,b,c;
    printf("Enter three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    avg(a,b,c);
}
#include<stdio.h>
int main(){

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sub = a - b;

    if(a > b){
        printf("%d",sub);
    }if(sub <= 0){
        printf("0");
    }

    return 0;
}
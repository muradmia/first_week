#include<stdio.h>
int main(){

    int a,b,gcd = 1;
    scanf("%d",&a);
    scanf("%d",&b);

    for(int i = 1;i <= a && i <= b;++i){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }

    printf("%d",gcd);


    return 0;
}
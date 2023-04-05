#include<stdio.h>
int main(){

    int i , num,multi;
    scanf("%d",&num);
    for(int i = 1;i <= 10;i++){
        multi = num * i;
        printf("%d * %d = %d\n",num,i,multi);
    }
    return 0;
}
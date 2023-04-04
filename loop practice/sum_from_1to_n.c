#include<stdio.h>
int main(){

    int sum = 0,i,num;
    scanf("%d",&num);

    for(i=0;i<=num;i++){
        sum += i;
    }

    printf("sum = %d\n",sum);
    return 0;
}
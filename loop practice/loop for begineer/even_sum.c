#include<stdio.h>
int main(){

    int i,num,sum = 0;
    scanf("%d",&num);

    for(i=0;i<=num;i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    printf("even sum is :%d",sum);
    return 0;
}
#include<stdio.h>
int main(){

    int i , sum = 0,num;
    scanf("%d",&num);

    for(i=0;i<num;i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    printf("odd sum is :%d",sum);
    return 0;
}
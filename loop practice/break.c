#include<stdio.h>
int main(){

    int i,num;
    scanf("%d",&num);
    for(i = 1;i <= 5;i++){
        printf("%d\n",i);
        if(i == 3){
            break;
        }
    }

    return 0;
}
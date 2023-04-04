#include<stdio.h>
int main(){

    int i,num;
    scanf("%d",&num);

    for(i=0;i<=num;i++){
        if(i % 2 == 0){
            printf("%d is even\n",i);
        }else{
            printf("%d is Odd\n",i);
        }
    }

    return 0;
}
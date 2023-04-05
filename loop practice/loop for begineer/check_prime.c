#include<stdio.h>
int main(){

    int i,num,count = 0;
    scanf("%d",&num);

    for(i=2;i<num;i++){
        if(num % i == 0){
            count++;
            break;
        }  
    }

    if(count == 1){
        printf("%d is not a prime number.\n",num);
    }else{
        printf("%d is a prime number.\n",num);
    }
    return 0;
}
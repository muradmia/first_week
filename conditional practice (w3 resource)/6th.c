#include<stdio.h>
int main(){

    int num , n ;
    printf("Enter input : ");
    scanf("%d",&num);


    if(num != 0){
        if(num > 0){
            n = 1;
        }else{
        n = -1;
        }
    }else{
        n = 0;
    }

    printf("print the value of num : %d\n",num);
    printf("print the value of n : %d\n",n);

    return  0;
}

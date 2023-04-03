#include<stdio.h>
int main(){

    int age;
    printf("enter your age :");
    scanf("%d",&age);

    if(age >= 18){
        printf("Congratulation! You are eligible for casting your vote. \n");
    }else{
        printf("You are Not eligible for casting your vote.");
    }

    return 0;
}

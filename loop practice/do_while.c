#include<stdio.h>
int main(){

    int i =0, num;
    scanf("%d",&num);

    do{
        printf("%d\n",i);
        i++;

    }while(i <= num);

    return 0;
}
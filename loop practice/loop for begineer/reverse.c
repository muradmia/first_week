#include<stdio.h>
int main(){

    int num,reverse = 0;
    scanf("%d",&num);
    int temp = num;
    int rim = 0;
    while(temp > 0){
        rim = temp % 10;
        reverse = reverse * 10 + rim;
        temp /= 10;
    }

    printf("%d",reverse);
    return 0;
}
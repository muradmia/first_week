#include<stdio.h>
int main(){

    int num , num2, num3;
    scanf("%d %d %d",&num,&num2,&num3);

    if(num > num2 && num > num3){
        printf("%d\n",num);
    }else if(num2 > num3){
        printf("%d",num2);
    }else{
        printf("%d",num3);
    }

    return 0;
}
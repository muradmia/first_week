#include<stdio.h>
int main(){

    int a,rem = 0,temp,result = 0;

    scanf("%d",&a);
    temp = a;

    while (temp != 0)
    {
        rem = temp % 10;
        result = result * 10 + rem;
        temp = temp / 10;
    }


    if(result == a){
        printf("%d\nYES",result);
    }else{
        printf("%d\nNO",result);
    }

    return 0;
}
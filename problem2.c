#include<stdio.h>
int main(){

    int a,b;
    scanf("%d %d",&a,&b);

    int sum = a + b;
    int sub = a - b;
    int multi = a * b ;
    float c = a, d = b;
    float div =c / d;

    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,multi);
    printf("%d / %d = %.2f",a,b,div);

    return 0;
}
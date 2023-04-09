#include<stdio.h>
#include<math.h>
int main(){

  int n,num,result;

    scanf("%d",&n);

    while(n > 9)
    n = n / 10;

    if(n % 2 == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }


    return 0;
}
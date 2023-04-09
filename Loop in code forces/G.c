#include<stdio.h>
int main(){
    int t,n,i,j;
    scanf("%d",&t);
    long long int result = 1;

    for(i = 0;i < t;i++){
        scanf("%d",&n);
        result = 1;
        for(j = 1;j <= n;j++){
            result = result *  j;
        }
        printf("%lld\n",result);
    }


    return 0;
}
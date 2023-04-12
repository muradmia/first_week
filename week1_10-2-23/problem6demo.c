#include<stdio.h>
#include<math.h>
int main(){

    long long int e,m,b,result = 0;
    scanf("%lld %lld %lld",&e,&m,&b);

    long long int min = 0;

    if(e < m && e < b){
        min = e;
    }else if(m < e && m < b){
        min = m;
    }else{
        min = b;
    }
   
    result += min;
    e -= min;
    m -= min;
    b -= min;

    if(e / 2 > b){
        min = b;
    }else{
        min = e / 2;
    }
    result += min;

    printf("%lld",result);
   
    return 0;
}
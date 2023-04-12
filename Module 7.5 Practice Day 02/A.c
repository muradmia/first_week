#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

    long long int n,result = 0;
    scanf("%lld",&n);
    long long int arr[n],sum = 0;

    for(int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
    }

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    if(sum < 0){
         result = sum * -1;
         printf("%lld",result);
    }else{
        printf("%lld",sum);
    }
  

    
    return 0;
}
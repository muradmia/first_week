#include<stdio.h>
int main(){

    int t,n,ecount = 0,ocount = 0,pcount = 0,ncount = 0;
    scanf("%d",&t);

    for(int i=0; i<t; i++){

        scanf("%d",&n);
        if(n > 0){
            pcount++;
        }else if(n < 0){
            ncount++;
        }
        
        if(n % 2 == 0){
            ecount++;
        }else{
            ocount++;
        }
    }

    printf("Even: %d\n",ecount);
    printf("Odd: %d\n",ocount);
    printf("Positive: %d\n",pcount);
    printf("Negative: %d",ncount);
    return 0;
}
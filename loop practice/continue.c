#include<stdio.h>
int main(){

    int i,num;
    scanf("%d",&num);

    for(i=0;i<num;i++){
        
        if(i == 5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
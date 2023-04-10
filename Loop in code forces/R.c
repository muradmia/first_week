#include<stdio.h>
int main(){
    int a,b,sum = 0,i;
    while(1){
        scanf("%d",&a);
        scanf("%d",&b);
        if(a <=0 || b <= 0)
        break;
        
        if(a > b){
            sum = 0;
            for(i = b;i <= a;i++){
                sum +=i;
                printf("%d ",i);     
            }
        }else{
            sum = 0;
            for(i = a;i <= b;i++){ 
                sum +=i;  
                printf("%d ",i);
            }
        }
       printf("sum =%d\n",sum);
    }
    return 0;
}
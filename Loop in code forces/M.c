#include<stdio.h>
int main(){

    int a,b,count = 0,ctr = 0;
    scanf("%d",&a);
    scanf("%d",&b);

    for(int i = a;i <= b;i++){
        int n = i;
        int ch = 0;
        while (n != 0)
        {
            int digit = n % 10;
            n = n / 10;
            
            if (digit != 7 && digit != 4)
            {
                ch++;
            }   
        }  
            if (ch == 0)
            {
                printf("%d ",i);
                ctr++;
            }  
    }

    if(ctr == 0){
        printf("-1");
    }
    

    
    return 0;
}
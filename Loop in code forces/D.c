#include<stdio.h>
int main(){
 
   int num;

   while(1){
        scanf("%d",&num);

        if(num == 1999){
            printf("Correct");
            break;
        }else{
            printf("Wrong\n");
        }
   }
    return 0;
}
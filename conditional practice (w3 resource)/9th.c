#include<stdio.h>
int main(){


    int math,phy,che;
    scanf("%d %d %d",&math,&phy,&che);
    int total = math + phy + che;
    int result = math + phy;
    if(math >= 65 && phy >= 55 && che >= 50){
        if(total >= 190 || result >= 140){
            printf("The  candidate is eligible for admission.\n");

        }
    }else{
        printf("The  candidate is not eligible for admission.\n");

    }

    return 0;
}
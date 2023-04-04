#include<stdio.h>
int main(){

    int c1,c2;

    scanf("%d %d",&c1,&c2);

    if(c1 > 0 && c2 > 0){
        printf("the (%d %d) is first quadrant\n",c1,c2);
    }else if(c1 < 0 && c2 < 0){
        printf("the (%d %d) is second quadrant\n",c1,c2);
    }else if(c1 > 0 && c2 < 0){
         printf("the (%d %d) is third quadrant\n",c1,c2);
    }else if(c1 < 0 && c2 > 0) {
        printf("the (%d %d) is fourth quadrant\n",c1,c2);
    }else if(c1 == 0 && c2 == 0){
        printf("The coordinate point (%d,%d) lies at the origin.",c1,c2);
    }


    return 0;
}
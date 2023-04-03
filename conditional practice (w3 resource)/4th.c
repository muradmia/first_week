#include<stdio.h>
int main(){

    int year;
    printf("enter input : ");
    scanf("%d",&year);

    if(year % 400 == 0 || year % 4 == 0){
        printf(" %d Leap year \n",year);
    }else if(year % 100 == 0){
        printf("%d is not a leap year",year);
    }else{
        printf("Not a leap year");
    }
    return 0;
}

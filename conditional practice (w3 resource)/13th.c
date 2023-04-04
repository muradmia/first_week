#include<stdio.h>
int main(){

    int weather;
    scanf("%d",&weather);

    if(weather < 0){
        printf("Freezing weather\n");
    }else if(weather > 10){
        printf("Very Cold weather\n");
    }else if(weather > 20){
        printf("Cold weather");
    }else if(weather > 30){
        printf("Normal in Temp\n");
    }else if(weather > 40){
        printf("Its Hot\n");
    }else{
        printf("Very Hot\n");
    }



    return 0;
}
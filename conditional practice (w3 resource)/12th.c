#include<stdio.h>
#include<string.h>
int main(){

    int  phy,cs,che,roll;
    char name[20];
    float total,avg;
    scanf("%s",name);
    scanf("%d",&roll);
    scanf("%d %d %d",&phy,&cs,&che);
    scanf("%c",&name);
    total = phy + cs + che;
    avg  = total / 3.0;

    printf("Roll no :%d\n",roll);
    printf("Student name :%s\n",name);
    printf("make in phycis :%d\n",phy);
    printf("make in computer science :%d\n",phy);
    printf("make in Chemistry :%d\n",phy);

    printf("total mark : %.2f\n",total);
    printf("avergae mark :%.2f\n",avg);

    if(avg >= 60){
        printf("First division\n");
    }else if(avg < 60 && avg >= 48){
        printf("second division\n");
    }else if(avg < 48 && avg >= 36){
        printf("third division\n");
    }else{
        printf("Fail\n");
    }





    return 0;
}
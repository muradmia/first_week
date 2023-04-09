#include<stdio.h>
int main(){

    char a;
    scanf("%c",&a);

    if(a <= 'Z' && a >= 'A'){
        printf("ALPHA\nIS CAPITAL");
    }else if(a <= '9' && a >= '0'){
        printf("IS DIGIT");
    }else if(a <= 'z' && a >= 'a'){
        printf("ALPHA\nIS SMALL");
    }

    return 0;
}
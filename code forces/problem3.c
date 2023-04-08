#include<stdio.h>
int main(){

    char c;
    scanf("%c",&c);


    if(c <= 'z' && c >= 'a'){
        c = c-32;
    }else if(c <= 'Z' && c >= 'A'){
        c = c + 32;
    }

    printf("%c",c);
    return 0;
}
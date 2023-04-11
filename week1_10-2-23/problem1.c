#include<stdio.h>
int main(){

    char c;
    scanf("%c",&c);

    if(c == 'z'){
        printf("%c",c-25);
    }else if(c >='a' && c <= 'z'){
        printf("%c",c+1);
    }

    return 0;
}
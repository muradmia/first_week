#include<stdio.h>
#include<limits.h>
int main(){


    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

   int min = INT_MAX,index;
    for( int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            index = i+1;
        }
    }


    printf("%d %d",min ,index);

    return 0;
}
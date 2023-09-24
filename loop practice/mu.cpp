#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    while(n--){
        string s;
        cin>>s;
        if(s == "Timur" || s == "miurT" || s == "Trumi" || s == "mriTu"){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }
    
    return 0;
}
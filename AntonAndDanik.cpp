#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){a++;}
        else{b++;}
    }
    if(a>b){cout<<"Anton"<<endl;}
    else if(b>a){cout<<"Danik"<<endl;}
    else{cout<<"Friendship"<<endl;}
    return 0;
}
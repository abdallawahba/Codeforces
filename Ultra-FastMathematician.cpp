#include<bits/stdc++.h>
using namespace std;

int main(){
    string x,y,s;
    cin>>x>>y;
    s=x;
    for(int i=0;i<x.size();i++){
        if((x[i]-'0')^(y[i]-'0')){s[i]='1';}
        else{s[i]='0';}
    }
    cout<<s<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
string Reverse(string s){
    string x=s;
    for(int i=0;i<s.size();i++){
        x[i]=s[s.size()-i-1];
    }
    return x;
}
int main(){
    string s,x;
    cin>>s;
    cin>>x;
    if(x==Reverse(s)){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
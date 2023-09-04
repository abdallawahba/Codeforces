#include<bits/stdc++.h>
using namespace std;

int main(){
    //cout<<endl<<"----------------------------------------------------------------------------------------------"<<endl;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<=s.size();i++){
        if(s[i]>=97 && s[i]<=122){count++;}
    }
    if(count>=s.size()-count){
        for(int i=0;i<=s.size();i++){
        if(s[i]>=65 && s[i]<=90){s[i]+=32;}
        }
    }
    else{
        for(int i=0;i<=s.size();i++){
        if(s[i]>=97 && s[i]<=122){s[i]-=32;}
        }
    }
    cout<<s;
    //cout<<endl<<"----------------------------------------------------------------------------------------------"<<endl;
    return 0;
}
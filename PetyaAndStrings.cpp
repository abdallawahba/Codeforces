#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string ss;
    cin>>s;
    cin>>ss;
    int flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=ss[i] && abs(s[i]-ss[i])!=32){
            if(ss[i]%32>s[i]%32){flag=-1;}
            else{flag=1;}
            break;
        }
    }
    cout<<flag<<endl;
    return 0;
}
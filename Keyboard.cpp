#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char d;cin>>d;
    string input;cin>>input;
    string output=input;
    int p;
    if(d=='R'){
        for(int i=0;i<input.size();i++){
            for(int j=0;j<s.size();j++){
                if(s[j]==input[i]){p=j;break;}
            }
            output[i]=s[p-1];
        }
    }else{
        for(int i=0;i<input.size();i++){
            for(int j=0;j<s.size();j++){
                if(s[j]==input[i]){p=j;break;}
            }
            output[i]=s[p+1];
        }
    }
    cout<<output<<endl;
}
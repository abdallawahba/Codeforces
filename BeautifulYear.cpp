#include<bits/stdc++.h>
using namespace std;
bool Is_Distinct(int x){
    string s=to_string(x);
    bool f=1;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(s[i]==s[j]){f=0;}
        }
    }
    return f;
}
int main(){
    int x;
    cin>>x;
    for(int i=x+1;i<=9012;i++){
        if(Is_Distinct(i)){cout<<i<<endl; return 0;}
    }
    return 0;
}
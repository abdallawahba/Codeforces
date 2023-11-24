#include<bits/stdc++.h>
#define int long long
using namespace std;
bool is_v(char s){
    if(s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U'||s=='y'||s=='Y'){return 1;}
    else{return 0;}
}
signed main(){
    string s;cin>>s;
    char output[2*s.size()]={'\0'};
    int i=1;
    for(int j=0;i<2*s.size() && j<s.size();j++){
        if(!is_v(s[j])){output[i-1]='.';output[i]=tolower(s[j]);i+=2;}
    }
    int k=2*s.size();
    for(int j=0;j<min(i-1,k);j++){cout<<output[j];}
}
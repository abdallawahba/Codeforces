#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    string s[n];
    string o[n];
    for(int i=0;i<n;i++){cin>>s[i];}
    for(int i=0;i<n;i++){
        int first_three=0;
        int last_three=0;
        for(int j=0;j<3;j++){
            first_three+=s[i][j]-'0';
        }
        for(int j=3;j<6;j++){
            last_three+=s[i][j]-'0';
        }
    if(first_three==last_three){o[i]="YES";}
    else{o[i]="NO";}
    }
    for(int i=0;i<n;i++){cout<<o[i]<<endl;}
    return 0;
}
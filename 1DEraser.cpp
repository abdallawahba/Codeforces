#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
    int o;cin>>o;
    for(int l=0;l<o;l++){
        int n,k,c=0;cin>>n>>k;
        char arr[n];for(int i=0;i<n;i++){cin>>arr[i];}
        for(int i=0;i<n;i++){
            if(arr[i]=='B' && i+k<n){c++;i+=k-1;}
            else if(arr[i]=='B'){c++; break;}
        }
        cout<<c<<endl;
    }
}
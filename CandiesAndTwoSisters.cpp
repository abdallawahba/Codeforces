#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int y=x/2;
        if(x%2){
            cout<<y<<endl;
        }
        else{
            
            cout<<y-1<<endl;
        }
    }
}
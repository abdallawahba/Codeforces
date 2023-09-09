#include<bits/stdc++.h>
using namespace std;
int ff(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(!(x%i)){return i;}
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        while(r>=l && !ff(r)){
            r--;
        }
        if(r<l){cout<<-1<<endl;}
        else{cout<<r-ff(r)<<"  "<<ff(r)<<endl;}
    }
    return 0;
}
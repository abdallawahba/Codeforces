#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    int x=0;
    int z=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x!=z){c++;}
        z=x;
    }
    cout<<c<<endl;
    return 0;
}
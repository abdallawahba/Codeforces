#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double x,s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s+=x;
    }
    cout<<setprecision(9)<<s/n<<endl;
    return 0;
}
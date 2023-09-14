#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n,k,o,e;
    cin>>n>>k;
    if(n%2){o=(n/2)+1;e=n-o;}
    else{e=n/2;o=n-e;}
    if(k<=o){cout<<2*k-1<<endl;}
    else if(k>o && k<=n){if(n%2){n++;}cout<<2*k-n<<endl;}
    return 0;
}
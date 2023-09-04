#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long Int;
int main(){
      Int n;
      cin>>n;
     for(Int i=0;i<n;i++){
        Int a,b,c;
        cin>>a>>b>>c;
        Int x=b+c;
        Int j=1;
        a--;
        for(j;a>0&&x>0;j+=2){
            x--;
            a--;
        }
        cout<<j<<endl;
     }
    return 0;
}
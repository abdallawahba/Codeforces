#include <bits/stdc++.h>
using namespace std;

int main (){
    int a;
    cin>>a;
    for(int f=0;f<a;f++){
        int n;
        cin>>n;
        int d,s,c,k,x;
        cin>>d>>s;
        c=d+floor((s/2)-((-1*(s%2))+1));
        for(int i=0;i<n-1;i++){
            cin>>d>>s;
            if(d<c){
                k=d+floor((s/2)-((-1*(s%2))+1));
                c=min(c,k);
            }
        }
        cout<<c<<endl;
    }
    system ("pause");
    return 0;
}
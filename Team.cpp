#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    int res=0;
    cin>>n;
 
    for(int i=0;i<n;i++){
    int a,b,c,d=0;
    cin>>a;
   if(a==1) {d++;}
   cin>>b;
   if(b==1) {d++;}
   cin>>c;
   if(c==1) {d++;}
   if(d>=2) {res++;}
 
    }
    cout<<res<<endl;
    return 0;
}
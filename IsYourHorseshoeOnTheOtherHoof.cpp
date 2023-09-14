#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e=0;
    cin>>a;
    cin>>b;
    if(b==a){e++;}
    cin>>c;
    if(b==c||c==a){e++;}
    cin>>d;
    if(d==c||d==a||d==b){e++;}
    cout<<e<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    double m,n,a;
    cin>>n>>m>>a;
    long long x,y;
    x=ceil(m/a);
    y=ceil(n/a);
    cout<<x*y<<endl;
    return 0;
}
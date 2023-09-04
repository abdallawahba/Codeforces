#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x=0;
    cin>>x;
    for(int i=0;i<x;i++){
        string st="a";
        cin>>st;
        if(st.length()>10){
            cout<<st.at(0)<<st.length()-2<<st.at(st.length()-1)<<endl;
        }
        else{
            cout<<st<<endl;
        }
    }
    return 0;
}
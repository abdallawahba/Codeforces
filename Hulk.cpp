#include<bits/stdc++.h>
using namespace std;
int main(){
    int input=0;
    cin>>input;
    if(input==1){cout<<"I hate it "<<endl;return 0;}
    if(input>1){cout<<"I hate that ";}
    for(int i=1;i<input-1;i++){
        if(i%2){cout<<"I love that ";}
        else{cout<<"I hate that ";}
    }
    if(input%2){cout<<"I hate it"<<endl;}
    else{cout<<"I love it"<<endl;}
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long Int;
bool Is_Prime(Int x){
    Int i;
    for(i=2;i<x&&x%i;i++);
    return x==i;
}
int main(){
    Int input,x;
    cin>>input>>x;
    if(x==1){cout<<1<<endl;return 0;}

    if(Is_Prime(input)&&x==2){cout<<input<<endl;return 0;}
    if(x>input || (Is_Prime(input)&&x>2) ){cout<<-1<<endl;return 0;}
    
    for(Int i=1;i<=input;i++){
        if(!(input%i)){x--;}
        if(x==0){cout<<i<<endl;return 0;}
    }
    
    cout<<-1<<endl;
    return 0;
}
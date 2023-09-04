#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    for(int k=0;k<n;k++){
        string input;
        cin>>input;
        long pos=input.size();
        int x=0;
        for(long i=input.size()-1;i>=0;i--){
            if(input[i]-'0'>=5){
                if(i==0){input='1'+ input;pos=i+1;}   
                else{
                    input[i-1]++;
                    pos=i;
                }
            }
        }
        for(long i=pos;i<input.size();i++){
            input[i]='0';
        }
        cout<<input<<endl;
    }
    return 0;
}
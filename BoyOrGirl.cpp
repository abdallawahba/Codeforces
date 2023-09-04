#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string s;
	int count=1;
    cin>>s;
	for(int i=1;i<s.size();i++){
		int flag=0;
		for(int j=0;j<i;j++){
			if(s[i]==s[j]){flag=1;}
		}
        if(flag==0){count++;}
	}
    if(count%2==0){cout<<"CHAT WITH HER!"<<endl;}
    else{cout<<"IGNORE HIM!"<<endl;}
	return 0;
}
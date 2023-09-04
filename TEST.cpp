#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string s,x;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<s.size();j++){
			if (s.at(i)==s.at(j) && i!=j)
				s.erase(i,1);
		}
	}
	x.assign(s);
	if((x.size())%2!=0){
		cout<<"IGNORE HIM!"<<endl;
	}
	else{
		cout<<"CHAT WITH HER!"<<endl;
	}
return 0;
}
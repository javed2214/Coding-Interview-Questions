// Program to Add Two Strings

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str1,str2;
	cin>>str1>>str2;

	stack<char>S1,S2,S;

	for(auto it:str1) S1.push(it);
	for(auto it:str2) S2.push(it);
	int carry=0; string str;
	int sum;

	while(!S1.empty() and !S2.empty()){
		int sum=S1.top()-'0'+S2.top()-'0'+carry;
		S.push(sum%10+'0');
		carry=sum/10;
		S1.pop();
		S2.pop();
	}
	while(!S1.empty()){
		sum=S1.top()-'0'+carry;
		carry=sum/10;
		S.push(sum%10+'0');
		S1.pop();
	}
	while(!S2.empty()){
		sum=S2.top()-'0'+carry;
		carry=sum/10;
		S.push(sum%10+'0');
		S2.pop();
	}
	if(carry) S.push(carry+'0');

	while(!S.empty()){
		char x=S.top();
		str+=x;
		S.pop();
	}
	cout<<str;

	return 0;
}
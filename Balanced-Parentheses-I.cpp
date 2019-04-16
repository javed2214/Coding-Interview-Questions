// Check for Balanced Parentheses
// (())() or [][[]] or {{{}}}
// Only Applicable for Homogeneous Parentheses

#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){

	int c=0;

	for(int i=0;i<str.length();i++){
		if(str[i]=='(') c++;
		else c--;
		if(c<0) return false;
	}
	return (c==0);
}

int main(){

	string str;
	cin>>str;

	if(isBalanced(str)) cout<<"Balanced\n";
	else cout<<"Not Balanced\n";

	return 0;
}
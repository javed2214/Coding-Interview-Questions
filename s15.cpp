// Program to Compute Mod a Big Number Represented as String

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="1263514634434085740385345";
	int n=10;
	int res=0;
	for(int i=0;i<str.length();i++)
		res=(res*10+str[i]-'0')%10;

	cout<<res;

	return 0;
}
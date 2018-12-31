// Program to find Largest Number Formed From an Array

#include<bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2){

	string t1=s1+s2;
	string t2=s2+s1;

	if(t1>t2) return true;
	else return false;
}

int main(){

	int n=5;
	string str[n];

	for(int i=0;i<n;i++)
		cin>>str[i];

	sort(str,str+n,compare);

	string str1="";
	for(int i=0;i<n;i++)
		str1+=str[i];

	int num=0;
	for(int i=0,j=str1.length();i<str1.length();i++)	// Converting String to Integer
		num+=(str1[--j]-'0')*pow(10,i);

	cout<<num;

	return 0;
}

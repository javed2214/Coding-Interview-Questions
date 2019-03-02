// Program to Count Occurrence of Substring
// Brute Force

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="geeksforgeeksisforgeeks";
	string sub="geeks";
	
	int n=str.length()-sub.length();
	int c=0,count=sub.length();

	for(int i=0;i<=n;i++){
		string s=str.substr(i,i+count);
		if(s==sub) c++;
		count--;
	}
	cout<<"Occurrence of geeks: ";
	cout<<c;

	return 0;
}
// Shifting each Characters of String by 'k' Positions to the Right

#include<bits/stdc++.h>
using namespace std;

void rotate(string s1, string &s2, int n, int k){

	for(int i=0;i<n;i++){
		int ind=(i+k)%n;
		s2[ind]=s1[i];
	}
}

int main(){

	string s1="hacker";
	string s2="      ";
	int n=s1.length();
	int k=2;

	rotate(s1,s2,n,k);
	cout<<s2;

	return 0;
}
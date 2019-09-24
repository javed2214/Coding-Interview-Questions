// Program to Count Number of Substrings With Same First and Last Charaters
// https://www.geeksforgeeks.org/count-substrings-with-same-first-and-last-characters/

#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	int a[26] = {0};
	int res = 0;

	for(int i=0;i<s.length();i++) a[s[i]-'a']++;

	for(int i=0;i<26;i++)
		res += (a[i] * (a[i] + 1)) / 2;

	cout<<res;

	return 9;
}
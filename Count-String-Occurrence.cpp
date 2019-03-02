// Count Occurrence of String that can be Constructed from Another Given String

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="geekforgeekss";
	string sub="geeks";

	int hash1[26]={0},hash2[26]={0};

	for(int i=0;i<str.length();i++)
		hash1[str[i]-'a']++;

	for(int i=0;i<sub.length();i++)
		hash2[sub[i]-'a']++;

	int ans=INT_MAX;

	for(int i=0;i<26;i++){
		if(hash2[i])
			ans=min(ans,hash1[i]/hash2[i]);
	}
	cout<<ans;

	return 0;
}
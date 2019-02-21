// Program to Check if Two STrings are Permutation of Each Other
// We can check No of Characters in Each String

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str1="abcdrtfgh";
	string str2="bcadgtrfh";

	int a[26]={0};

	if(str1.length()!=str2.length()){
		cout<<"No";
		return 0;
	}
	for(int i=0;i<str1.length();i++){
		a[str1[i]-'a']++;
		a[str2[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(a[i]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";

	return 0;
}
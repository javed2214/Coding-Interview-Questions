// Find First Non Repetitive Character in a String
// Using HashMap 

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="abgdefbdaef";
	int n=str.length();

	int hash[26]={0};

	for(int i=0;i<n;i++)
		hash[str[i]-'a']++;

	for(int i=0;i<n;i++){
		if(hash[str[i]-'a']==1){
			cout<<str[i]<<"\n";
			break;
		}
	}
	return 0;
}

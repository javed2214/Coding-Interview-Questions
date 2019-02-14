// Program to Remove Duplicates From String
// Using Hashing

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="geeksforgeeks";
	int n=str.length();
	
	int hash[26]={0};

	for(int i=0;i<n;i++)
		hash[str[i]-'a']++;
	
	for(int i=0;i<n;i++){
		if(hash[str[i]-'a']!=0){
			cout<<str[i];
			hash[str[i]-'a']=0;
		}
	}

	return 0;
}
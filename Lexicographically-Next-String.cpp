// Program to Find Lexicographically Next String
// https://www.geeksforgeeks.org/lexicographically-next-string/

#include<bits/stdc++.h>
using namespace std;

string nextString(string str){

	if(str=="") return "a";
	int n=str.length()-1;
	
	while(str[n]=='z' and n>=0) n-=1;

	if(n==-1) str+='a';
	else str[n]++;

	return str;
}

int main(){

	string str="geeks";
	cout<<nextString(str);

	return 0;
}
// Program to Reverse Middle Words of String
// https://www.geeksforgeeks.org/reverse-middle-words-of-a-string/
// My name is Javed => My eman si Javed

#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){

	reverse(str.begin(),str.end());
	return str;
}

int main(){

	string str;
	str="My name is Javed";

	stringstream ss(str);
	string word;
	vector<string> v;

	while(getline(ss,word,' '))
		v.push_back(word);

	if(v.size()>2){
		for(int i=1;i<v.size()-1;i++)
			v[i]=reverseString(v[i]);
	}
	str.clear();

	for(auto it:v)
		str+=it+" ";

	cout<<str.substr(0,str.length()-1);

	return 0;
}
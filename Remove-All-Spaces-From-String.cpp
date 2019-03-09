// Program to Remove All Spaces From String

#include<bits/stdc++.h>
using namespace std;

void method1(string str){

	str.erase(remove(str.begin(),str.end(),' '),str.end());
	cout<<str<<"\n";
}

void method2(string str){

	stringstream ss(str);
	string word,res;
	while(getline(ss,word,' '))
		res+=word;
	cout<<res<<"\n";
}

void method3(string str){

	int count=0;
	for(int i=0;i<str.length();i++){
		if(str[i]!=' ')
			str[count++]=str[i];
	}
	str.erase(count);	// Remove Spaces From Index count To End
	cout<<str;
}

int main(){

	string str=" ge   e  k  s fo r    g e e   ks ";
	method1(str);
	method2(str);
	method3(str);

	return 0;
}
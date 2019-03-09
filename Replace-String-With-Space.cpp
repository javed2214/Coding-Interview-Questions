// Program to Replace All Occurrence of String With Space

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="LIELIEILIEAMLIECOOL";
	string sub="LIE";
	string res;

	for(int i=0;i<str.length();i++){
		if(sub==str.substr(i,3)){
			i+=2;
			if(res.size()>0) res+=" ";
		}
		else res+=str[i];
	}
	cout<<res;

	return 0;
}
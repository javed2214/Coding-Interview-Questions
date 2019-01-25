// Program to Print All Possible Subsequences of a given String

#include<bits/stdc++.h>
using namespace std;

void getSubs(string inp, string out){

	if(inp.length()==0){
		cout<<out<<endl;
		return;
	}
	getSubs(inp.substr(1),out);
	getSubs(inp.substr(1),out+inp[0]);
}

int main(){

	string inp="abcd";
	string out;

	getSubs(inp,out);

	return 0;
}
// Program to Find Name Initials
// Javed Ansari => J Ansari

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str;
	getline(cin,str);

	int x=0;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			cout<<str[x]<<" ";
			x=i+1;
		}
		else if(i==str.length()-1)
			cout<<str.substr(x);
	}
	return 0;
}
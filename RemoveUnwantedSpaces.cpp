// Program to Remove Unwanted Spaces from String using 'stringstream'
// "   Hello   World   " ==>> "Hello Word"

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str=" Coding    is   Life  ";
	stringstream ss(str);

	string word,s;
	
	while(ss>>word)
		s=word+" "+s;
	
	s=s.substr(0,s.length()-1);
	cout<<s;

	return 0;
}

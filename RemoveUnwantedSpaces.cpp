// Program to Remove Unwanted Spaces from String using 'stringstream'
// "   Hello   World   " ==>> "Hello Word"
// "  Coding is    Life "  ==>> "Coding is Life"

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str=" Coding    is   Life  ";
	stringstream ss(str);

	string word,s;
	
	while(ss>>word)
		s=s+" "+word;
	
	s=s.substr(1,s.length());
	cout<<s;

	return 0;
}

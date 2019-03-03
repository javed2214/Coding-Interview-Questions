// Program to Group Characters of the Same type in a String
// ab253%fgsd@#bdej32 => abfgsdbdej25332@#%

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str,d,a,s;
	cin>>str;
	int n=str.length();
	int i=0;

	while(i<n){
		char ch=str[i];
		if(isdigit(ch))
			d+=ch;
		else if(isalpha(ch))
			a+=ch;
		else
			s+=ch;
		i++;
	}
	string ss=a+d+s;
	cout<<ss;

	return 0;
}
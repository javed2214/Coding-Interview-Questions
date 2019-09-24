// Decode String
// a4b5c10 -> aaaabbbbbcccccccccc

#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	cin>>s;

	char ch;
	string str;
	int res = 0;

	for(auto c:s){
		
		if(isdigit(c)) res = res * 10 + (c - '0');
		
		else{
			if(res == 0) ch = c;
			else{
				str.append(res, ch);
				res = 0;
				ch = c;
			}
		}		
	}

	str.append(res, ch);

	cout<<str;

	return 0;
}

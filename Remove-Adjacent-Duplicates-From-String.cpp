// Program to Remove Adjacent Duplicates from String (In-Place)
// https://www.techiedelight.com/in-place-remove-all-adjacent-duplicates-from-string/

#include<bits/stdc++.h>
using namespace std;

void removeAdjacentDup(string &s){

	int n = s.length();
	int k = 0, i = 1;

	char prev = s[0];

	while(i < n){

		if(prev != s[i]){
			s[++k] = s[i++];
			prev = s[k];
		}
		else{
			while(prev == s[i]) i++;
			prev = s[--k];
		}
	}
	s.erase(k + 1);
}

int main(){

	string s = "ABDAADBDAABB";
	int n = s.length();

	removeAdjacentDup(s);

	cout << s;

	return 0;
}
// Program to Remove Adjacent Duplicates from String (In-Place)
// https://www.techiedelight.com/in-place-remove-all-adjacent-duplicates-from-string/
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// "ABBCD" -> "ACD"

#include<bits/stdc++.h>
using namespace std;

/************** METHOD 1 **************/

string Method_1(string s){

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

	return s;
}

/************** METHOD 2 **************/

string Method_2(string s){

	string res;

	for(auto it:s){
		if(res.size() and res.back() == it) res.pop_back();
		else res.push_back(it);
	}
	return res;
}

int main(){

	string s = "ABDAADBDAABB";
	int n = s.length();

	cout << Method_1(s) << endl;
	cout << Method_2(s) << endl;

	return 0;
}

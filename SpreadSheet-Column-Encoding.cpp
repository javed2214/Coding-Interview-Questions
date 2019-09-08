// SpreadSheet Column Encoding
// https://leetcode.com/problems/excel-sheet-column-number/

#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string s){

	int res = 0;

	for(auto it:s)
		res = res * 26 + (it - 'A') + 1;

	return res;
}

int main(){

	string s;
	cin>>s;

	cout<<titleToNumber(s);

	return 0;
}
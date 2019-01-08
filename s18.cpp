// Minimum number of Digits to be Removed So that No two consecutive Digits are Same

#include<bits/stdc++.h>
using namespace std;

int removeDigits(int n){

	string str=to_string(n);
	int count=0;

	for(int i=0;i<str.length()-1;i++){
		if(str[i]==str[i+1])
			count++;
	}
	return count;
}

int main(){

	int n=555535;
	cout<<removeDigits(n);

	return 0;
}
// Program to Find Maximum Number that Can be Formed Using Digits of a given Number Without Sorting
// TC => O(n)

#include<bits/stdc++.h>
using namespace std;

int maxNo(int n){

	int hash[10]={0};
	string str=to_string(n);
	for(int i=0;i<str.size();i++){
		hash[str[i]-'0']++;
	}
	int sum=0;
	for(int i=9;i>=0;i--){
		int x=hash[i];
		while(x--){
			sum=sum*10+(i);
		}
	}
	return sum;
}

int main(){

	int n=27236;
	cout<<maxNo(n);

	return 0;
}

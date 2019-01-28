// Input any String and Find Whether any of the Permutation of String is Palindrome or Not

#include<bits/stdc++.h>
using namespace std;

bool Permutation(string str){

	string s=str;
	reverse(s.begin(),s.end());
	if(s==str) return true;
	return false;
}

int main(){

	string str="dsmadsa";
	sort(str.begin(),str.end());
	bool flag=false;
	do{
		if(Permutation(str)){
			flag=true;
			cout<<str;
			break;
		}
	}while(next_permutation(str.begin(),str.end()));
	
	if(!flag) cout<<"Not Exist";

	return 0;
}
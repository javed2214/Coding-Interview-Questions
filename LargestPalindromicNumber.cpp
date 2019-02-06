// Program to Find Largest Palindromic Number by Permuting Digits

#include<bits/stdc++.h>
using namespace std;
std::vector<string> v;

int Palindrome(string str){
	string s1,s2;
	s1=s2=str;
	reverse(s2.begin(),s2.end());
	if(s1==s2) return 1;
	return 0;
}

void permu(string str){

	sort(str.begin(),str.end());
	do{
		if(Palindrome(str))
			v.push_back(str);
	}while(next_permutation(str.begin(),str.end()));
}

int main(){

	string str;
	cin>>str;

	permu(str);
	if(v.size()==0) cout<<"Invalid Number";
	else cout<<*max_element(v.begin(),v.end());

	return 0;
}

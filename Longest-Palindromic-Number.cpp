// Program to Find Longest Palindromic Number in an Array

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){

	string str=to_string(n);
	string s=str;
	reverse(str.begin(),str.end());
	return s==str;
}

int main(){

	int a[]={1,2,121,99899,3223,77,898};
	int n=sizeof(a)/sizeof(int);
	int max=INT_MIN;

	for(int i=0;i<n;i++){
		if(isPalindrome(a[i]) and a[i]>max)
			max=a[i];
	}
	if(max==INT_MIN) cout<<"No Palindrome Numbers Found!\n";
	else cout<<max<<"\n";

	return 0;
}
// Program to Check if a Sentence is Palindrome or Not After Removing Spaces and Other Special Characters
// https://www.geeksforgeeks.org/sentence-palindrome-palindrome-removing-spaces-dots-etc/
// Two Pointer Approach

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="Too &^% Hot.. .@@ to  ** Hoot";
	transform(str.begin(),str.end(),str.begin(),::tolower);

	int l,r;
	l=0;
	r=str.length()-1;

	while(l<=r){

		if(!(str[l]>='a' and str[l]<='z')) l++;

		else if(!(str[r]>='a' and str[r]<='z')) r--;

		else if(str[l]==str[r]){
			l++;
			r--;
		}
		else{
			cout<<"Not Palindrome!";
			return 0;
		}
	}
	cout<<"Palindrome!";

	return 0;
}

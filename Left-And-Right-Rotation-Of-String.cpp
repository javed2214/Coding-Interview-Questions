// Left and Right Rotation of a String by k Characters
// "JAVED" ->[Left Rotate, k=2]->  "VEDJA"
// "JAVED" ->[Right Rotate, k=2]-> "EDJAV"

#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str, int l, int r){

	while(l<r) swap(str[l++],str[r--]);
}

void leftRotate(string &s, int k){

	reverseString(s,0,k-1);
	reverseString(s,k,s.length()-1);
	reverseString(s,0,s.length()-1);
}

void rightRotate(string &str, int k){

	leftRotate(str,str.length()-k);
}

int main(){

	string str1="JAVED";
	string str2="JAVED";
	int k=2;

	leftRotate(str1,k);
	cout<<str1;

	cout<<endl;

	rightRotate(str2,k);
	cout<<str2;

	return 0;
}
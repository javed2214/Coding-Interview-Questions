// Program to Reverse Each Words of a String
// Ex: "Alice and Bob" => "Bob and Alice"

#include<bits/stdc++.h>
using namespace std;

void reverseString(string *str, int l, int r){
	reverse(str->begin()+l, str->begin()+r);
}

int main(){

	string str="Alice and Bob";
	int n=str.length();

	reverseString(&str,0,n);

	int j=0;
	for(int i=0;i<=n;i++){
		if(str[i]==' ' or i==n){
			reverseString(&str,j,i);
			j=i+1;
		}
	}
	cout<<str;
	
	return 0;
}
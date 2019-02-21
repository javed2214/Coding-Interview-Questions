// Program to Remove Spaces and Other Special Characters From String

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="jvk sd k   &^ . . ,@@ kef ef e ** efeknf kefke %^$ fe,. fjkefek";
	int n=str.length();

	int count=0;

	for(int i=0;i<n;i++){
		if(isalpha(str[i]))
			str[count++]=str[i];
	}
	str.erase(count);	// Erase ALl the Charaters from Count to End of String

	cout<<str;

	return 0;
}
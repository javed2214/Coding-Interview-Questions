// Program to Reverse all the Vowels of String

#include<bits/stdc++.h>
using namespace std;

int checkV(char ch){
	if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U')
		return 1;
	return 0;
}

string reverseVowels(string str){

	int n=str.length();
	int j=str.length()-1;
	int i=0;
	while(i<=j){

		if(checkV(str[i])==1 and checkV(str[j])==1){
			swap(str[i],str[j]);
			i++;j--;
		}
		else if(checkV(str[i])==1 or checkV(str[j])==0){
			j--;
		}
		else
			i++;
	}
	return str;
}

int main(){

	string str;
	cin>>str;
	cout<<reverseVowels(str);

	return 0;
}

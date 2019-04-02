// Program to Find Substring in Main String
// Brute Force Approach

#include<bits/stdc++.h>
using namespace std;

// ------------------------ [ METHOD 1 ] ------------------------

int methodOne(string str1, string str2){

	for(int i=0;i<str1.length();i++){
		int j=0;
		if(str1[i]==str2[j]){
			j=1;int p=str2.length();
			int ind=i;
			for(int k=i+1;j<str1.length();k++){
				if(str1[k]!=str2[j++])
					break;
				p--;
			}
			if(p==1 || p==0){

				return ind;			
			}
		}
	}
	return -1;
}

// ------------------------ [ METHOD 2 ] ------------------------

int methodTwo(string str1, string str2){

	int len=str2.length();
	for(int i=0;i<str1.length();i++){
		if(str2.substr(0)==str1.substr(i,len))
			return i;
	}
	return -1;
}

int main(){

	string str1="abcbdbdfcabcfdefgh";
	string str2="bdfcabc";

	cout<<methodOne(str1,str2)<<"\n";
	cout<<methodTwo(str1,str2);
	
	return 0;
}
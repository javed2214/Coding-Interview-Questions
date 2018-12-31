// String Matching Algorithm (Brute Force)

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1="abcbdbdfcabcfdefgh";
	string str2="bdfcabc";
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
				cout<<"String Found at Index: "<<ind;
				return 0;
			}
		}
	}
	cout<<"Not Found";
	return 0;
}

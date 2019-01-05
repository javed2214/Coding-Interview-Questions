// Program to Count Occurrence of Substring in Main String

#include<bits/stdc++.h>
using namespace std;

int main(){

	string text="acbdcb";
	string pat="cb";
	int n1=text.length();
	int n2=pat.length();
	int x=n1-n2;
	int ans=0;
	bool found;
	
	for(int i=0;i<=x;i++){
		found=true;
		for(int j=i;j<i+n2;j++){
			if(pat[j-i]!=text[j])
				found=false;
		}
		if(found)
			ans++;
	}
	cout<<ans;

	return 0;
}

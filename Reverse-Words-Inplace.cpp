// Reverse Words Inplace
// Asked in Google

#include<bits/stdc++.h>
using namespace std;

void getReverse(string &str, int start, int end){
	while(start < end) swap(str[start++], str[end--]);
}

int main(){

	string str="Cracking the Coding Interview is an Amazing Book";
	int n=str.length();

	getReverse(str,0,n-1);
	int start=0;

	for(int i=0;i<n;i++){
		if(str[i]==' ') getReverse(str, start, i-1), start=i+1;
		if(i==n-1) getReverse(str,start,i);
	}
	cout<<str;

	return 0;
}

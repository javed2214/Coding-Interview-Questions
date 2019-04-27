// Largest Possible Number formed From an Array
// 1 29 32 79=> 9973221

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,29,32,79};
	int n=sizeof(a)/sizeof(int);

	int b[10];
	for(int i=0;i<=9;i++) b[i]=0;
	string str;

	for(int i=0;i<n;i++){
		int p=a[i];
		while(p){
			b[p%10]++;
			p/=10;
		}
	}

	for(int i=9;i>=0;i--){
		int freq=b[i];
		while(freq--)
			str+=to_string(i);
	}
	cout<<str;

	return 0;
}
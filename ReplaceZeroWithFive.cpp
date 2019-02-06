// Program to Replace all ‘0’ with ‘5’ in an Input Integer

#include<bits/stdc++.h>
using namespace std;

int getAns(int n){

	if(n==0) return 0;

	int d=n%10;
	if(d==0) d=5;

	return getAns(n/10)*10+d;
}

int main(){

	int n=1203;
	cout<<getAns(n);	
		
	return 0;
}

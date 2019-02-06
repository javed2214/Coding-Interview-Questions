// Program to Find GCD of Two Numbers Recursively

#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){

	if(a==0) return b;
	if(b==0) return a;
	if(a==b) return a;
	if(a>b) return GCD(a-b,a);
	if(b>a) return GCD(a,b-a);
}

int main(){

	int a=20,b=34;
	cout<<GCD(a,b);

	// cout<<__gcd(20,34);

	return 0;
}

// Program to Check Whether the Number is Prime or Not
// Efficient Algorithm
// Time Comlexity: O(root(n))

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){

	int n;
	cin>>n;

	if(isPrime(n)) cout<<"Yes\n";
	else cout<<"No\n";

	return 0;
}
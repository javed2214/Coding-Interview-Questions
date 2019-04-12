// Prime Seive
// Sieve of Eratosthenes
// An Efficient Algorithm to Find all the Prime Numbers within a Given Range
// Time complexity : O(n*log(log(n)))

#include<bits/stdc++.h>
using namespace std;

bool prime[100001];

void primeSeive(){

	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;

	for(int i=2;i*i<100001;i++){
		if(prime[i]){
			for(int j=i*i;j<100001;j+=i){
				prime[j]=false;
			}
		}
	}
}

int main(){

	primeSeive();

	int n,k;
	n=1;k=500;

	for(int i=n;i<=k;i++){
		if(prime[i])
			cout<<i<<" ";
	}
	return 0;
}
// Program to Find Largest Number having all Digits Prime
// https://www.geeksforgeeks.org/largest-number-prime-digits/

#include<bits/stdc++.h>
using namespace std;
#define N 100001

bool prime[N];

void primeSeive(){

	memset(prime,true,sizeof(prime));
	prime[0]=false; prime[1]=false;

	for(int i=2;i*i<N;i++){
		if(prime[i]){
			for(int j=i*2;j<N;j+=i)
				prime[j]=false;
		}
	}
}

bool primeDigits(int n){

	int x=n;
	int r;
	while(n){
		r=n%10;
		if(prime[r]==false) return false;
		n/=10;
	}
	return true;
}

int main(){

	primeSeive();

	int n=7721;
	int max=INT_MIN;

	for(int i=1;i<=n;i++){
		if(primeDigits(i) and i>max)
			max=i;
	}
	if(max==INT_MIN) cout<<"No such Number found!\n";
	else cout<<max<<"\n";

	return 0;
}
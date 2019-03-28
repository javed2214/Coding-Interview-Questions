// Next Greatest Number having Same No of Digits

#include<bits/stdc++.h>
using namespace std;

long long hashh[10]={0};

void countDigits(long long n){

	while(n){
		long long r=n%10;
		hashh[r]++;
		n/=10;
	}
	return;
}

bool checkDigits(long long n){

	long long check[10]={0};
	while(n){
		check[n%10]++;
		n/=10;
	}
	for(long long i=0;i<=9;i++)
		if(hashh[i]!=check[i])
			return false;

	return true;
}

int main(){

	long long n;
	cin>>n;

	countDigits(n);

	for(int i=n+1;i<INT_MAX;i++){
		if(checkDigits(i)){
			cout<<i;
			return 0;
		}
	}
	return 0;
}
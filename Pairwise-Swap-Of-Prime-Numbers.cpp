// Pairwise Swap of Prime Numbers
// 4 6 3 9 7 12  =>  4 6 7 9 3 12
//     -   -	         -   -

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){

	if(x == 0 or x == 1) return 0;
	if(x == 2) return 1;

	for(int i=2;i<x;i++){
		if(x % i == 0) return 0;
	}
	return 1;
}

int main(){

	int a[] = {1,4,5,10,8,7,4,3,9,13};
	int n = sizeof(a) / sizeof(int);

	int co = 0;
	int first = 0, second = 0;

	for(int i=0;i<n;i++){
		if(isPrime(a[i]) and co == 0) first = i, co++;
		else if(isPrime(a[i]) and co == 1) second = i, swap(a[first], a[second]), co = 0;
	}

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
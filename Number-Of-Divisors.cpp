// Program to Find Number of Divisors of N (N can be upto 10^12)
// HackerEarth Problem
// https://www.hackerearth.com/problem/algorithm/number-of-divisors-5/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll test;
	cin>>test;

	while(test--){

		ll n,c=0;
		cin>>n;

		for(int i=1;i<=sqrt(n);i++){
			
			if(n%i==0){
				
				if(n/i==i) c++;
				else c+=2;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
																																																								/*
**************************
*  Author: Javed Ansari  *
**************************

							                        																																											*/
// http://codeforces.com/contest/552/problem/B

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end())
#define ll long long int
#define SIZE 100000001

int main(){

	ll n;	
	cin>>n;

	int r=floor(log10(n))+1;	// To find Number of Digits
	
	ll sum=0;
	sum=r*(n+1);
	
	ll p=0;
	for(int i=0;i<r;i++) p+=pow(10,i);

	cout<<sum-p;

	return 0;
}

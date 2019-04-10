// ------- Author: Javed Ansari -------
// http://codeforces.com/problemset/problem/573/A

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD 1000000007
#define DB(x) cout<<#x<<"="<<x<<endl;
#define FASTREAD ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define s(a) sort(a.begin(),a.end());
#define ll long long int
#define SIZE 100000001


int main(){

	FASTREAD;
	
	ll n;
	cin>>n;

	ll a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
		while(a[i]%2==0) a[i]/=2;
		while(a[i]%3==0) a[i]/=3;
	}

	for(int i=1;i<n;i++){
		if(a[i]!=a[0]){
			cout<<"No\n";
			return 0;
		}
	}

	cout<<"Yes\n";

	return 0;
}

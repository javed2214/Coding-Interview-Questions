// ------- Author: Javed Ansari -------
// http://codeforces.com/problemset/problem/1141/B

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

	int a[]={1,0,0,1,0,0,1,1,1};	// Ans: 4
	int n=sizeof(a)/sizeof(int);

	int sum=0,mx=INT_MIN;

	for(int i=0;i<2*n;i++){

		if(a[i%n]==1) sum+=1;
		else sum=0;
		mx=max(mx,sum);
	}
	cout<<mx<<"\n";

	return 0;
}

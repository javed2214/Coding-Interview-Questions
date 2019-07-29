// A Flipping Game
// https://codeforces.com/problemset/problem/327/A

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int a[n], b[n], s=0;
	for(int i=0;i<n;i++) cin>>a[i], s+=a[i];
	
	for(int i=0;i<n;i++){
		if(a[i] == 1) b[i] = -1;
		else b[i] = 1;
	}
	
	// Kadane's Algorithm

	int meh=0, msf=INT_MIN;
	
	for(int i=0;i<n;i++){
		meh+=b[i];
		meh=max(meh,b[i]);
		msf=max(msf,meh);
	}
	cout<<msf+s;

	return 0;
}
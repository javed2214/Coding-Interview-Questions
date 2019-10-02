// Program to Find Minimum Difference Between any Two Elements
// https://www.geeksforgeeks.org/find-minimum-difference-pair/
// TC: O(n(logn))

#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;

		int a[n];

		for(int i=0;i<n;i++) cin>>a[i];

		sort(a, a+n);

		int mi = INT_MAX;

		for(int i=1;i<n;i++)
			mi = min(mi, a[i] - a[i-1]);			

		cout<<mi<<"\n";
	}

	return 0;
}
// Smallest Non Constructible Element
// Given an Array. The task is to Find Smallest Non Constructible Element
// Time Complexity:- O(log(n))

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={2,2,1,14,12,4};
	int n=sizeof(a)/sizeof(int);

	sort(a,a+n);

	int sm=0;

	for(int i=0;i<n;i++){
		if(a[i] > sm+1)
			break;
		sm+=a[i];
	}
	cout<<sm+1;

	return 0;
}
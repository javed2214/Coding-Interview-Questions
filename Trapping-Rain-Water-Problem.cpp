// Trapping Rain Water Problem
// https://www.geeksforgeeks.org/trapping-rain-water/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={3,0,0,2,0,4};
	int n=sizeof(a)/sizeof(int);

	int left[n],right[n];

	left[0]=a[0];
	right[n-1]=a[n-1];

	for(int i=1;i<n;i++)
		left[i]=max(left[i-1],a[i]);

	for(int i=n-2;i>=0;i--)
		right[i]=max(right[i+1],a[i]);

	int sum=0;
	
	for(int i=0;i<n;i++)
		sum+=min(left[i],right[i])-a[i];

	cout<<sum;
}
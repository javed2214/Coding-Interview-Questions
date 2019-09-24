// Given an array of integers of size ‘n’.
// Our aim is to calculate the maximum sum of ‘k’ 
// consecutive elements in the array.

// https://www.geeksforgeeks.org/window-sliding-technique/
// Sliding Window Technique

#include<bits/stdc++.h>
using namespace std;

int maxSum(int *a, int n, int k){

	int max_sum = 0;

	for(int i=0;i<k;i++) max_sum += a[i];

	int sum = max_sum;

	for(int i=k;i<n;i++){
		sum += a[i] - a[i-k];
		max_sum = max(max_sum, sum);
	}

	return max_sum;
}

int main(){

	int a[] = {1,4,2,10,2,3,1,0,20};
	int n = sizeof(a) / sizeof(int);

	int k;
	cin>>k;

	cout << maxSum(a,n,k);

	return 0;
}
// Maximum Circular Subarray Sum
// https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/

#include<bits/stdc++.h>
using namespace std;

int kadanesAlgo(int *a, int n){

	int sum = 0, mx = 0;

	for(int i=0;i<n;i++){

		sum += a[i];
		mx = max(mx, sum);
		if(sum < 0) sum = 0;
	}

	return mx;
}

int maxCircularSum(int *a, int n){

	int max_kadane = kadanesAlgo(a,n);

	int max_wrap = 0, sum = 0;

	for(int i=0;i<n;i++){

		sum += a[i];
		a[i] = -a[i];
	}

	// sum - (-kadanesAlgo(a,n))
	max_wrap = sum + kadanesAlgo(a,n);

	return max(max_kadane, max_wrap);
}

int main(){

	int a[] = {11, 10, -20, 5, -3, -5, 8, -13, 10};
	int n = sizeof(a) / sizeof(int);

	cout << maxCircularSum(a,n);

	return 0;
}

// Length of Longest Increasing Subarray
// https://www.geeksforgeeks.org/longest-increasing-subarray/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {5, 6, 3, 5, 7, 8, 9, 1, 2};	// Ans : [3 5 7 8 9] Length = 5
	int n = sizeof(a) / sizeof(int);

	int sum = 1, mx = 0;

	for(int i=1;i<n;i++){

		if(a[i] > a[i-1]) sum++;
		
		else{
			mx = max(mx, sum);
			sum = 1;
		}
	}
	cout << max(mx, sum);

	return 0;
}
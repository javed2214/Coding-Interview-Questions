// Sum of absolute differences of all pairs in a given Array
// https://www.geeksforgeeks.org/sum-absolute-differences-pairs-given-array/
// Time Complexity : O(nLog(n))
// If the Array is not Sorted, then we've to Sort the Array First

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	sort(a, a + n);

	int sum = 0;

	for(int i=0;i<n;i++) sum += a[i] * i - a[i] * (n - i - 1);

	cout << sum << "\n";

	return 0;
}
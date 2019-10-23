// Find Pythagorean Triplet in an Unsorted Array
// https://www.geeksforgeeks.org/find-pythagorean-triplet-in-an-unsorted-array/

// Brute Force Approach is to Generate All the Possible Solutions and Choose Among the Best One; TC : O(n^3)
// TC Can be Improved up to O(n^2) by Sorting the Array

#include<bits/stdc++.h>
using namespace std;

int isTriplet(int *a, int n){

	sort(a,a+n);

	for(int i=0;i<n;i++) a[i] *= a[i];

	for(int i=n-1;i>=2;i--){

		int l = 0;
		int r = i - 1;

		while(l < r){

			if(a[l] + a[r] == a[i]) return true;
			if(a[l] + a[r] < a[i]) l++;
			else r--;
		}
	}
	return false;
}

int main(){

	int a[] = {3,1,4,6,5};
	int n = sizeof(a) / sizeof(int);

	int x = isTriplet(a,n);

	x == 1 ? cout<<"Yes" : cout<<"No";

	return 0;
}
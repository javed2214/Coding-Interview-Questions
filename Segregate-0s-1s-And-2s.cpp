// Segregate 0's 1's and 2's (Dutch national Flag Sorting Problem)
// https://coderbyte.com/algorithm/dutch-national-flag-sorting-problem
// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

// Important Interview Question

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {2,1,0,0,0,2,1,1,0,2,1,0};
	int n = sizeof(a) / sizeof(int);

	int low = 0;
	int mid = 0;
	int high = n - 1;

	while(mid <= high){

		if(a[mid] == 0) swap(a[mid++], a[low++]);
		else if(a[mid] == 1) mid++;
		else swap(a[mid], a[high--]);
	}

	for(int i=0;i<n;i++) cout << a[i] << " ";

	return 0;
}
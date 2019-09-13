// Program to Find First Missing Positive Integer in an Array
// https://leetcode.com/problems/first-missing-positive/

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int *a, int n){

	for(int i=0;i<n;i++){
		while(a[i] > 0 and a[i] <= n and a[a[i] - 1] != a[i])
			swap(a[i], a[a[i] - 1]);
	}

	for(int i=0;i<n;i++)
		if(a[i] != i + 1)
			return i + 1;

	return n + 1;
}

int main(){

	int a[] = {3,4,-1,1};
	int n = sizeof(a) / sizeof(int);

	cout<<missingNumber(a,n);

	rteurn 0;
}
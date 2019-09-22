// Program to Rearrange Positive and Negative Numbers in O(n) time and O(1) Space
// https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers-publish/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {-1,2,-3,-4,5,-6,7,8,9};
	int n = sizeof(a) / sizeof(int);

	int j = 0;

	for(int i=0;i<n;i++){			// Segregate Positive and Negative Numbers
		if(a[i] < 0){				// All Negative Numbers at the Begining and All Positive Numbers at the End
			swap(a[i], a[j]);
			j++;
		}
	}

	int pos = j, neg = 0;

	while(pos < n and pos > neg and a[pos] >= 0){
		swap(a[pos], a[neg]);
		pos++;
		neg += 2;
	}

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
// Program to Move Zeros to the End of the Array
// https://leetcode.com/problems/move-zeroes/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {0,1,0,3,12};
	int n = sizeof(a)/sizeof(int);

	int j = 0;

	for(int i=0;i<n;i++){
		if(a[i] != 0){
			swap(a[i], a[j]);
			j++;
		}
	}

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
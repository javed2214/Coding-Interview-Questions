// Reverse Array in Group of Size 'K'
// [1 2 3 4 5 6 7 8] k=3 => [3 2 1 6 5 4 8 7]

#include<bits/stdc++.h>
using namespace std;

void reverse(int *a, int l, int r){
	while(l<r)
		swap(a[l++],a[r--]);
}

int main(){

	int a[]={1,2,3,4,5,6,7,8};
	int n=sizeof(a)/sizeof(int);
	int k=3;

	for(int i=0;i<n;i+=k){
		if(i+k-1<n) reverse(a,i,i+k-1);
		else reverse(a,i,n-1);
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}

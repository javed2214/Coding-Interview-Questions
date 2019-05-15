// Rotate Array Anticlockwise by k Elements
// [1 2 3 4 5 6 7] k=2 -> [3 4 5 6 7 1 2]

#include<bits/stdc++.h>
using namespace std;

void reverse(int *a, int l, int r){
	while(l<r)
		swap(a[l++],a[r--]);
}

int main(){

	int a[]={1,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(int);
	int k=2;

	reverse(a,0,k-1);
	reverse(a,k,n-1);
	reverse(a,0,n-1);

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
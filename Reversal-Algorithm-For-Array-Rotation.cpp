// Reversal Algorithm for Array Rotation
// [1,2,3,4,5,6] ==>> [6,5,1,2,3,4]

#include<bits/stdc++.h>
using namespace std;

void Reverse(int *a, int start, int end){

	for(int i=start;i<end/2;i++)
		swap(a[i],a[end-i-1]);
}

int main(){

	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	int k=2;

	Reverse(a,0,n-k);
	Reverse(a,n-k+1,n);
	Reverse(a,0,n);

	for(auto it:a) cout<<it<<" ";

	return 0;
}
// Generate All Subarrays
// O(n^3) Time Complexity

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++)
				cout<<a[k]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}
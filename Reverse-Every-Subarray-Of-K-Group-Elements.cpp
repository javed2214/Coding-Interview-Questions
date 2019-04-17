// Reverse Every Subarray of K Group Elements

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);
	int k=3,start,end;

	for(int i=0;i<n;i+=k){

		start=i;
		end=min(i+k-1,n-1);
		while(start < end)
			swap(a[start++], a[end--]);
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
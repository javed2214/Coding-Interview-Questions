// Find Orignal Array from Encrypted Array
// https://www.geeksforgeeks.org/find-original-array-encrypted-array-array-sums-elements/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={10,14,12,13,11};
	int n=sizeof(a)/sizeof(int);

	int sum=0;
	for(int i=0;i<n;i++) sum+=a[i];

	sum=sum/(n-1);
	
	for(int i=0;i<n;i++)
		a[i]=sum-a[i];

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
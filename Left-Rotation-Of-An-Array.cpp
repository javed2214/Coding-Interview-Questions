// Quickly find Left Rotation of an Array
// [1 3 5 7 9] k=1 => [3 5 7 9 1]

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,3,5,7,9};
	int n=sizeof(a)/sizeof(int);

	int k; cin>>k;

	for(int i=k;i<k+n;i++)
		cout<<a[i%n]<<" ";

	return 0;
}
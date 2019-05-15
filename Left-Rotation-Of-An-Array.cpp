// Quickly Print Left Rotation of an Array
// [1 3 5 7 9] k=1 => [3 5 7 9 1]

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,3,5,7,9};
	int n=sizeof(a)/sizeof(int);

	int k; cin>>k;

	int mod = k % n;

	for(int i=0;i<n;i++)
		cout<<a[(mod + i)%n]<<" ";

	return 0;
}
// For an Array 'a' Return the Index of Middle Element such that the Left
// Part is equal to the Right Part
// Ex: [1,2,3,5,4,2] => Sum of Left of 5 = Sum of Right of 5 = 6
// Return Index of 5 i.e. 3

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,5,4,2};
	int n=sizeof(a)/sizeof(int);
	int pre[n];

	for(int i=0;i<n;i++){
		if(i==0) pre[i]=a[i];
		else pre[i]=a[i]+pre[i-1];
	}
	for(int i=1;i<n;i++){
		if(pre[n-1]-pre[i]==pre[i-1]){
			cout<<"Index Found: "<<i<<"\n";
			return 0;
		}
	}
	cout<<"Index Not Found!";

	return 0;
}
// preSum: 1 3 6 11 15 17
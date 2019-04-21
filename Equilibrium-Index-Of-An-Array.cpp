// Program to Find Equilibrium Index of an Array
// Equilibrium index of an array is an index such that the
// sum of elements at lower indexes is equal to the sum of elements at higher indexes. 

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={-7, 1, 5, 2, -4, 3, 0};
	int n=sizeof(a)/sizeof(int);

	int rightSum=0,leftSum=0;

	for(int i=0;i<n;i++)
		rightSum+=a[i];

	for(int i=0;i<n;i++){
		rightSum-=a[i];
		if(leftSum==rightSum){
			cout<<i;
			return 0;
		}
		leftSum+=a[i];
	}

	cout<<"-1";

	return 0;
}
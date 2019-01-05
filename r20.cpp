// Shifting each Elements of an Array by 'k' Positions to the Right

#include<bits/stdc++.h>
using namespace std;

void rotate(int *a1, int *a2, int n, int k){

	for(int i=0;i<n;i++){
		int ind=(i+k)%n;
		a2[ind]=a1[i];
	}
}
int main(){

	int a1[]={1,2,3,4,5};
	int a2[5];
	int n=sizeof(a1)/sizeof(int);
	int k=2;
	rotate(a1,a2,n,k);
	
	for(int i=0;i<n;i++)
		cout<<a2[i]<<" ";

	return 0;
}
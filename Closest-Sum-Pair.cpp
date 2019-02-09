// Given a sorted array and a number x, find the pair in that array whose sum is closest to x

#include<bits/stdc++.h>
using namespace std;

void closestSum(int *a, int n, int x){

	int l=0,r=n-1,k=INT_MAX;
	int p,q;

	while(l<r){
		if(abs(a[l]+a[r]-x)<k){
			p=a[l];
			q=a[r];
			k=abs(a[l]+a[r]-x);
		}	
		else if(a[l]+a[r]>x)
			r--;
		else
			l++;
	}
	cout<<"Closest Sum Pair: "<<p<<" and "<<q<<" Sum:"<<p+q<<"\n";

	return;
}

int main(){

	int a[]={10,22,28,29,30,40};
	int n=sizeof(a)/sizeof(int);

	int x=54;

	closestSum(a,n,x);

	return 0;
}
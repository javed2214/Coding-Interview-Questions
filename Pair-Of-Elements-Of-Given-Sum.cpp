// Program to Find All the Pair of Elements of Given Sum
// Two Pointer Algorithm

#include<bits/stdc++.h>
using namespace std;

void getPair(int *a, int n, int sum){

	sort(a,a+n);

	int l=0,r=n-1;
	while(l<r){

		if(a[l]+a[r]==sum){
			cout<<a[l]<<" "<<a[r];
			cout<<"\n";
			l++;r--;
		}
		else if(a[l]+a[r]<sum)
			l++;
		else
			r--;
	}
	return;
}

int main(){

	int a[]={1,8,4,6,45,10,8,-8};
	int n=sizeof(a)/sizeof(int);
	int sum=16;

	getPair(a,n,sum);

	return 0;
}

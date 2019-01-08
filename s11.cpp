// Missing Number in an Array

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,4,5};
	int n=sizeof(a)/sizeof(int);

	int x1=0,x2=0;
	for(int i=0;i<n;i++)
		x1^=a[i];
	for(int i=1;i<=n+1;i++)
		x2^=i;

	cout<<(x1^x2);

	return 0;
}
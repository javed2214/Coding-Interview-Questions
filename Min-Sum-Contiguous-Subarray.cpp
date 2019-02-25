// Minimum Sum Contiguous Subarray

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={3,-4,2,-3,-1,7,-5};
	int n=sizeof(a)/sizeof(int);

	int sum=INT_MAX,min=INT_MAX;

	for(int i=0;i<n;i++){

		if(sum > 0) sum=a[i];
		else sum+=a[i];
		if(sum < min) min=sum;
	}
	cout<<min;

	return 0;
}
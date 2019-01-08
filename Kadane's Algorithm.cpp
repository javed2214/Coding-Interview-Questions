// Kadane's Algorithm (Max Sum Contiguous SubArray)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={2,2,-3,7};
	int n=sizeof(a)/sizeof(int);

	int max=INT_MIN, sum=0;
	
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum>max) max=sum;
		if(sum<0) sum=0;
	}
	cout<<max;

	return 0;
}

// Program to Find Largest Sum of Contiguous Increasing Subarray

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={2,1,4,7,3,6};
	int n=sizeof(a)/sizeof(int);

	int max=INT_MIN,sum=0;

	for(int i=0;i<n;i++){

		sum=a[i];
		while(i<n-1 and a[i]<a[i+1]){
			sum+=a[i+1];
			i++;
		}
		if(sum>max) max=sum;
	}
	cout<<max;

	return 0;
}

// [1,4,7] => 12
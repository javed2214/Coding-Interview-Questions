// Max Sum Contiguous Array (Kadane's Algorithm)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={-1,2,44,-3,4,5};
	int n=sizeof(a)/sizeof(int);

	int max=0;
	int sum=0;

	for(int i=0;i<n;i++){
		if(sum<0)
			sum=0;
		sum+=a[i];
		if(sum>max)
			max=sum;
	}
	cout<<max;

	return 0;
}

// OUTPUT ==>> 52

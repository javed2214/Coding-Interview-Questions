// Kadane's Algorithm
// Maximum Sum Subarray
// https://www.youtube.com/watch?v=YxuK6A3SvTs&list=LLLmLE3lOJcgWJQe4TjuByaQ&index=5&t=0s

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {-4,1,-3,7,-2,5,7,-9,-3};
	int n  =  sizeof(a)/sizeof(int);

	int meh = 0, msf = INT_MIN;

	// meh  =  Max Ending Here
	// msf  =  Max So Far

	for(int i = 0;i<n;i++){

		meh = meh + a[i];
		meh = max(meh, a[i]);
		msf = max(msf, meh);
	}
	cout<<msf;

	return 0;
}

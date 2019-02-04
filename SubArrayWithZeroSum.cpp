// SubArray With Zero Sum
/*
arr[] = {1, 4, -2, -2, 5, -4, 3}

If we consider all prefix sums, we can
notice that there is a subarray with 0
sum when :
1) Either a prefix sum repeats or
2) Or prefix sum becomes 0.

Prefix sums for above array are:
1, 5, 3, 1, 6, 2, 5

Since prefix sum 1 repeats, we have a subarray
with 0 sum.
*/

#include<bits/stdc++.h>
using namespace std;

bool subArrayWithZeroSum(int *a, int n){

	unordered_set<int> S;
	int sum=0;
	for(int i=0;i<n;i++){

		sum+=a[i];
		if(sum==0 or S.find(sum)!=S.end())
			return true;
		S.insert(sum);
	}
	return false;
}

int main(){

	int a[]={1,4,-2,-2,5,-4,3};
	int n=sizeof(a)/sizeof(int);

	if(subArrayWithZeroSum(a,n)) cout<<"SubArray Found!";
	else cout<<"SubArray Not Found!";

	return 0;
}
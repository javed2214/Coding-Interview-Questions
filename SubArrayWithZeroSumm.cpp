// Program to Find Whether the SubArray with Zero Sum Exist or Not

// Time Complexity :- O(n)
// Using HashMap
// If We Consider all Prefix Sums, We can Notice that there is Subarray with Zero Sum When:
// a. Either a Prefix Sum repeats
// b. Prefix Sum Becomes Zero

#include<bits/stdc++.h>
using namespace std;

bool subArrayZero(int *a, int n){

	unordered_map <int,bool> Map;
	int sum=0;

	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum==0 || Map[sum]==true)
			return true;
		Map[sum]=true;
	}
	return false;
}

int main(){

	int a[]={1,4,-2,-2,5,-4,3};
	int n=sizeof(a)/sizeof(int);
	
	bool x=subArrayZero(a,n);
	
	if(x) cout<<"Subarray Exist";
	else cout<<"Not Exist";

	return 0;
}

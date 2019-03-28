// Given an array of size N and an integer K
// The task is to find the maximum for each and every contiguous sub-array of size K and print the sum of all these values in the end

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4,1,6,7,8,2,1};
	int n=sizeof(a)/sizeof(int);
	int k=4;

	int sum=0;
	vector<int> v;

	for(int i=0;i<=n-k;i++){
		int p=k;
		while(p--){
			v.push_back(a[i+p]);
		}
		sum+=*max_element(v.begin(),v.end());
		v.clear();
	}
	cout<<sum;

	return 0;
}
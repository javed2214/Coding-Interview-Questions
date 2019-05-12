// Program to Check if Array Can be Divied into Two Equal Subarrays using Pre-Sum
// [1 10 8 1] => [10] and [1 8 1]

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	int presum[n];
	for(int i=0;i<n;i++){
		if(i==0) presum[i]=v[i];
		else presum[i]=v[i]+presum[i-1];
	}
	for(int i=1;i<n;i++){
		if(presum[n-1]-presum[i-1]==presum[i-1]){
			cout<<"Yes!";
			return 0;
		}
	}
	cout<<"No!";

	return 0;
}
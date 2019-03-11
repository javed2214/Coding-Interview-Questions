// Program to Count Pairs in the Array whose Sum is Divisible by 4
// https://www.geeksforgeeks.org/count-pairs-array-whose-sum-divisible-4/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={2,2,1,7,5};	// (2,2),(7,5),(1,7)
	int n=sizeof(a)/sizeof(int);

	unordered_map<int,int> Map;

	for(int i=0;i<n;i++)
		Map[a[i]%4]++;

	int ans=0;

	ans+=(Map[0]*(Map[0]-1))/2;
	ans+=(Map[2]*(Map[2]-1))/2;
	ans+=(Map[1]*Map[3]);

	cout<<ans;

	return 0;
}
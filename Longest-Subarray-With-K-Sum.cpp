// Longest Subarray With 'K' Sum

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={10,5,2,7,1,9};
	int n=sizeof(a)/sizeof(int);
	// Pre-Sum: 10 15 17 24 25 34

	int k=15,sum=0,mx=0;
	unordered_map <int,int> Map;

	for(int i=0;i<n;i++){
		sum+=a[i];	
		if(sum==k) mx=i+1;
		if(Map.find(sum)==Map.end()) Map[sum]=i;
		if(Map.find(sum-k)!=Map.end()) mx=max(mx,i-Map[sum-k]);
	}
	cout<<mx;

	return 0;
}
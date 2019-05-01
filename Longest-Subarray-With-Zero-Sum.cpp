// Length of Largest Subarray With 0 Sum
// Time Complexity  = O(n)
// Space Complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[]={15,-2,2,-8,1,7,10,23};
	int n=sizeof(a)/sizeof(int);

	unordered_map<int,int> Map;
	int sum=0,mx=0;

	for(int i=0;i<n;i++){
		sum+=a[i];	
		if(a[i]==0 and mx==0) mx=1;
		if(sum==0) mx=i+1;
		if(Map.find(sum)==Map.end()) Map[sum]=i;
		else mx=max(mx,i-Map[sum]);
	}
	cout<<mx<<endl;

	return 0;
}
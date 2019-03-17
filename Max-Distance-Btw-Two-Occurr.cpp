// Program to Find Maximum distance between Two Occurrences of same Element in an Array

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={3,2,1,2,1,4,5,8,6,7,4,2};
	int n=sizeof(a)/sizeof(int);

	unordered_map <int,int> Map;
	int mx=INT_MIN;

	for(int i=0;i<n;i++){
		if(Map.find(a[i])==Map.end())
			Map[a[i]]=i;
		else
			mx=max(mx,i-Map[a[i]]);
	}
	cout<<mx;
}
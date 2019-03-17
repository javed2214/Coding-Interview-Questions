// Program to Count all Distinct Pairs with Difference equal to K

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,5,3,4,2};
	int n=sizeof(a)/sizeof(int);

	int k=3;

	unordered_map <int,bool> Map;

	for(int i=0;i<n;i++)
		Map[a[i]]=true;

	int count=0;
	for(int i=0;i<n;i++){
		if(Map[a[i]-k])
			count++;
	}
	cout<<count<<"\n";

	return 0;
}
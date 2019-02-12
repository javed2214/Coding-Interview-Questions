// Program to Find Missing Elements in a Given Range

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,14,11,51,15};
	int n=sizeof(a)/sizeof(int);
	int low=50,heigh=55;

	set<int>S;

	for(int i=0;i<n;i++)
		S.insert(a[i]);

	for(int i=low;i<=heigh;i++){
		if(S.find(i)==S.end())
			cout<<i<<" ";
	}

	return 0;
}
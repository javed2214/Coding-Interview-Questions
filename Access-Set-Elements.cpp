// Program to Access Set Elements 

#include<bits/stdc++.h>
using namespace std;

int main(){ 

	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	
	unordered_set<int> S;
	
	for(int i=0;i<n;i++)
		S.insert(a[i]);

	for(auto it=S.begin();it!=S.end();it++)
		cout<<*it<<" ";

	return 0;
}

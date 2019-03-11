// Program to Check All Array Elements are Distinct or Not

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4,2,5};
	int n=sizeof(a)/sizeof(int);

	unordered_set<int> S;

	for(int i=0;i<n;i++)
		S.insert(a[i]);

	if(S.size()==n) cout<<"Yes!";
	else cout<<"No!";

	return 0;
}
// Program to Find Length of Longest Consecutive Subsequence

#include<bits/stdc++.h>
using namespace std;

/*------------------------ [ METHOD 1 ] ------------------------*/

// O(nLog(n)) Time Complexity

void methodOne(int *a, int n){

	sort(a,a+n);

	int x=0;
	for(int i=0;i<n-1;i++)	// To Remove Duplicate Elements
		if(a[i]!=a[i+1]) a[x++]=a[i]; 

	a[x]=a[n-1];

	int count=1,mx=INT_MIN;
	for(int i=0;i<x;i++){
		if(a[i]+1==a[i+1]) count++;
		else mx=max(mx,count), count=1;
	}
	cout<<max(mx,count);

}

/*------------------------ [ METHOD 2 ] ------------------------*/

// Near to O(n) Time Complexity

void methodTwo(int *a, int n){

	unordered_set <int> S;

	for(int i=0;i<n;i++) S.insert(a[i]);

	int mx=INT_MIN;
	for(int i=0;i<S.size();i++){
		if(S.find(a[i]-1)==S.end()){
			int j=a[i];
			while(S.find(j)!=S.end())
				j++;
			mx=max(mx,j-a[i]);
		}
	}
	cout<<mx;

}

int main(){

	int a[]={36,41,56,35,44,33,34,92,43,32,42};
	int n=sizeof(a)/sizeof(int);

	methodOne(a,n);
	cout<<"\n";
	methodTwo(a,n);
	
	return 0;
}
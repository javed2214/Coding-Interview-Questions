// Program to Segregate Zeros and Ones

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,0,1,0,0,1,1,1,0,1,0,0};
	int n=sizeof(a)/sizeof(int);

	int l,r;
	l=0;r=n-1;

	while(l<r){
		if(a[l]==1){
			swap(a[l],a[r]);
			r--;
		}
		else l++;
	}

	for(auto it:a) cout<<it<<" ";

	return 0;
}

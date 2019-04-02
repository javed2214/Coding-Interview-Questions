// Program to Generate All Subarrays using Recursion

#include<bits/stdc++.h>
using namespace std;

void genSubArrays(int *a, int start, int end, int n){

	if(end==n) return;
	else if(start > end) genSubArrays(a,0,end+1,n);
	else{
		for(int i=start;i<=end;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
		genSubArrays(a,start+1,end,n);
	}
}

int main(){

	int a[]={1,2,3,4};
	int n=sizeof(a)/sizeof(int);

	genSubArrays(a,0,0,n);

	return 0;
}
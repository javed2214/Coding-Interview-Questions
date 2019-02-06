// Program to Rotate Array 'k' times using Modulo Operator (Anti-Clockwise)
// [1,2,3,4,5,6] ==>> [6,1,2,3,4,5] (if k=1)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);
	int res[n];
	int k=2;
	for(int i=0;i<n;i++){
		res[(i+k)%n]=a[i];
	}
	for(auto it:res)
		cout<<it<<" ";

	return 0;
}

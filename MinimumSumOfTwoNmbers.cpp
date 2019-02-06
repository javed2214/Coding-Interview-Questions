// Minimum sum of two Numbers formed from Digits of an Array

// Input: [6, 8, 4, 5, 2, 3]
// Output: 604
// The minimum sum is formed by numbers 
// 358 and 246

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int findMinSum(int *a, int n){

	sort(a,a+n);

	int sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		if(i%2==0)
			sum1=sum1*10+a[i];
		else 
			sum2=sum2*10+a[i];
	}
	return (sum1+sum2);
}

int main(){

	int a[]={6,8,4,5,2,3};
	int n=sizeof(a)/sizeof(int);

	cout<<findMinSum(a,n);

	return 0;
}

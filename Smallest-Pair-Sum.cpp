// Program to Find Smallest Pair Sum in an Array
// Approach: Return Sum of First and Second Minimum

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={3,5,6,2};
	int n=sizeof(a)/sizeof(int);

	int firstMin=INT_MAX, secMin=INT_MAX;

	for(int i=0;i<n;i++){

		if(a[i] < firstMin){
			secMin=firstMin;
			firstMin=a[i];
		}
		else if(a[i] < secMin and a[i]!=firstMin)
			secMin=a[i];
	}
	cout<<(firstMin + secMin);

	return 0;
}
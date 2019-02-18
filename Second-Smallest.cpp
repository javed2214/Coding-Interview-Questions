// Program to Find Second Smallest Elements in an Array
// Array may contain Duplicates

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={2,4,5,6,2,7,2,8,9,4,3,8,4,5,4,7,9,3};
	int n=sizeof(a)/sizeof(int);
	
	int min1=INT_MAX;
	int min2=INT_MAX;

	for(int i=0;i<n;i++){
		if(a[i]<min1){
			min2=min1;
			min1=a[i];
		}
		else if(a[i]<min2 and a[i]!=min1)
			min2=a[i];
	}
	cout<<"Second Smallest: "<<min2;

	return 0;
}
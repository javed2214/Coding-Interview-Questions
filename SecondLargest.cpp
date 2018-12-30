// Program to Find Second Largest Element in an Array

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={12,1,3,4,45,23,34,565,76,7,76,45,76,45,76,76};
	int n=sizeof(a)/sizeof(int);

	int x,y;
	x=a[0];		// First Largest
	y=a[1];		// Second Largest

	if(x<y)
		swap(x,y);

	for(int i=2;i<n;i++){
		if(a[i]>x){
			y=x;
			x=a[i];
		}
		else if(a[i]>y)
			y=a[i];
	}
	cout<<y;

	return 0;
}

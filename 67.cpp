// Program to Find Third Largest Element in an Array

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={12,3,1,4,45,23,34,565,76,7,76,45,76};
	int n=sizeof(a)/sizeof(int);

	int x,y,z;

	x=a[0];
	y=INT_MIN;
	z=INT_MIN;

	for(int i=1;i<n;i++){
		if(x<a[i])
			x=a[i];
	}
	for(int i=0;i<n;i++){
		if(y<a[i] and a[i]<x)
			y=a[i];
	}
	for(int i=0;i<n;i++){
		if(z<a[i] and a[i]<y)
			z=a[i];
	}

	cout<<"Third Largest Element: "<<z<<endl;
	
	return 0;
}
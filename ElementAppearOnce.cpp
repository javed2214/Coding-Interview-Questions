// Find the Element that Appears Once in an Array whereas Every other Element Appears Twice

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[]={1,2,1,3,4,5,4,3,6,5};
	int n=sizeof(a)/sizeof(int);
	int x=a[0];
	for(int i=0;i<n;i++)
		x=x^a[i];

	cout<<x;

	return 0;
}

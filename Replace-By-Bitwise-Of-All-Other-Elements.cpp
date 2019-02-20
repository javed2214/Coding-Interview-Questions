// Program to Replace Every Element by Bitwise of All Other Elements

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={2,3,3,5,5};
	int n=sizeof(a)/sizeof(int);
	int x=0;
	
	for(int i=0;i<n;i++)
		x^=a[i];
	
	for(int i=0;i<n;i++)
		a[i]=x^a[i];

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0; 
}
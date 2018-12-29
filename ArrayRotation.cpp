// Rotation of Arrays 'k' times Clockwise

#include<bits/stdc++.h>
using namespace std;

void rotateArray(int *a, int n, int k){

	int i=0;
	while(k--){
		int temp=a[n-1];
		for(int i=n-1;i>=0;i--){
			a[i]=a[i-1];
		}
		a[0]=temp;
	}
}

int main(){
	
	int a[]={1,3,4,5,6,8};
	int n=sizeof(a)/sizeof(int);

	int k=2;

	rotateArray(a,n,k);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0; 
}

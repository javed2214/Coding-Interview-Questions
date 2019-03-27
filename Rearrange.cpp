// Rearrange an Array in order – smallest, largest, 2nd smallest, 2nd largest and so on...
// Time Complexity : O(n Log n)
// Auxiliary Space : O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={5,8,1,4,2,9,3,7,6};
	int n=sizeof(a)/sizeof(int);

	sort(a,a+n);

	int temp[n];
	int l=0,r=n-1,i=0;

	while(l<=r){
		if(l==r){
			temp[i++]=a[l];
			break;
		}
		temp[i++]=a[l];
		temp[i++]=a[r];
		l++;r--;
	}
	for(int j=0;j<i;j++)
		a[j]=temp[j];

	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
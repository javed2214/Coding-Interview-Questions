// Remove Duplicate Elements from an Unsorted Array

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[]={1,2,3,1,4,2,1,1,3,4,5,6,7,4,4,5,6,7};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;){
			if(a[i]==a[j]){
				for(int k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
			}
			else
				j++;
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
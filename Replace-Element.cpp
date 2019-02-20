// Program to Replace Every Element with the Smallest Element on its Left Side

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={4,5,2,1,7,6};
	int n=sizeof(a)/sizeof(int);

	int mi=a[0];
	a[0]=-1;

	for(int i=1;i<n;i++){
		if(a[i]>mi) a[i]=mi;
		else swap(a[i],mi);
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";   

	return 0;
} 
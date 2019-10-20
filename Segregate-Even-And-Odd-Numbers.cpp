// Program to Segregate Even and Odd Numbers

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);

	int l,r;
	l=0;r=n-1;

	while(l<r){
		while(a[l]%2==0 and l<r)
			l++;
		while(a[r]%2!=0 and l<r)
			r--;
		if(l<r)
			swap(a[l],a[r]);
	}
	for(auto it:a) cout<<it<<" ";

	return 0;
}


//  ******************************** METHOD 2 **********************************

int main(){

	int a[] = {2,5,4,6,8,1,9};
	int n = sizeof(a) / sizeof(int);

	int cnt = 0;

	for(int i=0;i<n;i++){
		if(a[i] & 1) swap(a[i], a[cnt++]);
	}

	for(int i=0;i<n;i++) cout << a[i] << " ";

	return 0;
}

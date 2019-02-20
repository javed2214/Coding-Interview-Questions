// Maximum Difference between Two Elements such that Larger Element appears After the Smallest Element

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={3,2,90,10,110};
	int n=sizeof(a)/sizeof(int);
	int mi=a[0];
	int mii=INT_MIN;
	for(int i=1;i<n;i++){
		if(mi>a[i]) mi=a[i];
		if(abs(a[i]-mi)>mii)
			mii=abs(a[i]-mi);
	}
	
	cout<<mii<<"\n";

	return 0;
}

// Difference of (110 and 2)